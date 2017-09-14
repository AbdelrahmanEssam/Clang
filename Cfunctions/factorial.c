#include <stdio.h>
int factorial (int a);
int main (void)
{
	int x;
	printf("Please enter a number .. \n");
	scanf(" %d",&x);
	printf("The factorial of %d is %d \n",x,factorial(x));

	return 0;
}

int factorial (int a)
{
	if (a<=1)
	{	return 1; 
	} else return a * factorial (a-1) ;

}
