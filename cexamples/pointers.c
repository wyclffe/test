#include "stdio.h"

int main ()
{
	int a[10];
	int *pa;
	pa = &a;
	/* ponted the pointer to element 0 of the a array to have the first value of the array
	 */

	int x = *pa;
	int i;
	printf("%d",a[0]);

}
