#include "stdio.h"

int strle (char *a);

int main ()
{

    strle("ogetos");
}
int strle (char *a)
{
    int i;
    for(i = 0; *a != '\0'; a++)
       {
         i++;
       }
    return i;
}




