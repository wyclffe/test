#include <stdio.h>  
int main()  
	{
		int a;
		int *ptr=&a;

		printf("Address: %p\n", ptr); // printing the value of ptr.  

		printf("Value: %d\n", *ptr);  	// dereferencing the illegal pointer  

		return 0;  
	}
