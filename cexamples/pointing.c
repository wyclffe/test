#include "stdio.h"

int main(void)
{
	   int c;
	      int n;
int *p;
	         printf("Address of variable 'n': %p\n", &n);
		    printf("sizeofpointer 'p': %lu\n", sizeof(p));
		     printf("address of pointer 'p': %p\n", &p);
		     printf("giving value of address var n to pointer 'p'\n");
		n=98;
		p=&n;
		printf("address of pointer 'n': %p\n", &n);
		 printf("value of pointer 'p': %p\n", p);
		 printf("value in pointer 'p': %d\n", *p);
		 //deference
		 *p =404;
		  printf("value of 'n': %d\n", n);
		   printf("value of *p: %d\n", *p);
		       return (0);
}

