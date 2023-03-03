#include "stdio.h"

int main()
{
	 char a[7] = "School";

	    printf("%s\n", a);
	       printf("Value of the last char of a: %d\n", a[6]);
	          printf("Value of a: %p\n", a);
		     printf("Value of \"School\": %p\n", "School");
		     int i=0;
		        while (a[i]!='\0')
			{
			printf("%c",a[i]);
				i++;
			}
			printf("\n");
		     return 0;
}
