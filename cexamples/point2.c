#include <stdio.h>
#include <stdlib.h>
int main()  
	{
	int *ptr=NULL;  
	if(ptr!=NULL)  
	        {  
	     printf("value of ptr is : %d\n",*ptr);  
	    }  
        else  
	    {  
	     printf("Invalid pointer\n");  
	     }
       int *ptre = NULL;  
    ptre=(int*)malloc(4*sizeof(int));  
    if(ptre==NULL)  
	    {  
		        printf("Memory is not allocated\n");
		        }
    else  
	    {  
		        printf("Memory is allocated\n");  
		        }
		free(ptre);    
		return 0;  
	}
