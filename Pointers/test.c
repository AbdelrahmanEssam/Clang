#include <stdio.h>

int main (void)
{

	int x = 7;
	int *pX;
	pX = &x;
	
	printf("Address of x is %p \n",&x);
	printf("Value inside pX is %p \n",pX);
	printf("Values of x derefeneced from pX is %d \n",*pX);

	return 0;
}
