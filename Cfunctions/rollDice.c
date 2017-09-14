#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	printf("Welcome to the game .. \n================\nWe gonna roll a dice 20 times ... \n");
	for (i=0;i<20;i++)
	{	
	printf("%d \n",1+(rand()%6));	
		}

	return 0;
}
