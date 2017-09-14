#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i ;
	unsigned seed ;
	printf("Enter a positive number .. \n");
	scanf(" %u", &seed);
	srand(seed);
	for (i=0;i<20;i++)
	{
	printf("%d \n",1+(rand()%6));
		}


	return 0;
}
