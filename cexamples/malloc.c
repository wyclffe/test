#include "stdio.h"
#include "stdlib.h"

	int main ()
	{
		char *str;

		str = malloc(sizeof * str * 3);

		str[0] = 'O';
		str[1] = 'G';
		str[2] = '\0';

		printf("%s\n", str);

		int *top;

		top = malloc(sizeof * top * 3);

		top[0] = 122;
		top[1] = 123;
		top[2] = 124;

		printf("%d \n%d \n%d \n", top[0],top[1],top[2]);
		return 0;
	}
