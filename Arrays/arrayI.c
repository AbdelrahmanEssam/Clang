#include <stdio.h>

int main (void)
{
	int size,i ;
	printf("Please enter the size of the array  \n");
	scanf(" %d", &size);
	int uArray[size] ;
	printf("PLease enter the elements of the array  \n");
	
	for (i=0;i<size;i++)
	{
		scanf(" %d",&uArray[i]);
	
			}
	printf("The array you have entered is \n");
	
	for (i=0;i<size;i++)
	{
		printf("%d\n",uArray[i]);
						}
	return 0;
}
