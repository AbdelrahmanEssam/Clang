#include <stdio.h>

int main (void)
{
	int i,n ;
	printf("Welcome to the Game ..... \n ==============\nLooking for the nth number .. \n");
	printf("Please enter a number .. \n");
	scanf(" %d", &n);
	for (i=0;i<100;i++)
	{
	if(i==n) { 
	printf("Here we go! , index now is %d \n",i);
	break; }
	printf("Loading... the index is now %d \n",i);
	 
	}			


	return 0;
}
