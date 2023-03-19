
#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <cJSON.h>

#define API_URL "https://api.coingecko.com/api/v3"

// Function to perform HTTP GET request
int http_get(char *url, char *response) {
  CURL *curl;
  CURLcode res;
  curl = curl_easy_init();
  if (curl) {
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, response);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    if (res == CURLE_OK) {
      return 1;
    }
  }
  return 0;
}

// Callback function for writing HTTP response data
size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
  char **response_ptr = (char**)userp;
  *response_ptr = realloc(*response_ptr, size * nmemb + 1);
  strncpy(*response_ptr + strlen(*response_ptr), buffer, size * nmemb);
  return size * nmemb;
}

int main() {
  char *response = malloc(1);
  response[0] = '\0';
  char *url = malloc(strlen(API_URL) + strlen("/simple/price?ids=bitcoin&vs_currencies=usd"));
  strcpy(url, API_URL);
  strcat(url, "/simple/price?ids=bitcoin&vs_currencies=usd");
  http_get(url, response);
  free(url);
  cJSON *json = cJSON_Parse(response);
  cJSON *bitcoin = cJSON_GetObjectItemCaseSensitive(json, "bitcoin");
  cJSON *usd = cJSON_GetObjectItemCaseSensitive(bitcoin, "usd");
  double price = usd->valuedouble;
  printf("Bitcoin price: %.2f USD\n", price);
  cJSON_Delete(json);
  free(response);
  return 0;
}
