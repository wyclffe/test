#include "stdio.h"

int main (){

	int a[5];
	int b;
	int c[5];

	   a[0] = 98;
	      a[1] = 198;
	         a[2] = 298;
		    a[3] = 398;
		       a[4] = 498;
		          printf("Value of a[0]: %d\n", a[0]);
			     printf("Value of a[1]: %d\n", a[1]);
			        printf("Value of a[2]: %d\n", a[2]);
				   printf("Value of a[3]: %d\n", a[3]);
				      printf("Value of a[4]: %d\n", a[4]);
				         printf("Address of 'a[0]': %p\n", &(a[0]));
					    printf("Address of 'a[1]': %p\n", &(a[1]));
					       printf("Address of 'a[2]': %p\n", &(a[2]));
					          printf("Address of 'a[3]': %p\n", &(a[3]));
						     printf("Address of 'a[4]': %p\n", &(a[4]));
						  //   a = &b; will not work a isnt a pointer
						  //   a = 0 cant assing to an object
						  // a=c; you cant assign to an array
	// array type decay shown below where the value of an array is the address of the first element in it , its a temporary val when array is used in an expression
						     printf("a: %p\n", a);
						  printf("&a[0]: %p\n", &a[0]);   
						  int * d;
						  d= a;
						   printf("value of pointer d id: %p\n", d);
						   //exceptions 1 1sizeof ..array taken as object
						   printf("sizeof array a: %lu\n", sizeof(a));
						   //exception 2 & unary ..array taken as object
						   printf("value of &a %p\n", &a);
						   printf("sizeof &a: %lu\n", sizeof(&a));
						     return (0);



}
