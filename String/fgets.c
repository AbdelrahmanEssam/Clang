#include <stdio.h>

int main (void)
{
	char A[20],i;
	printf("Enter a string \n");
	fgets (A,20,stdin);
	printf("Now the array is filled , let's print its content \n");	
	i=puts(A);
	if(i==-1)
	{	
	printf("Function failed!\n");
		}else printf("Function successed! \n");

	return 0;
}
