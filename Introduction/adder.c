#include <stdio.h>

int main (void)
{
	int num1 ,num2,sum;
	printf("Enter two numbers separated by space .. \n");
	scanf(" %d %d",&num1,&num2);
	sum = num1 + num2 ;
	printf("Sum is %d \n",sum);
	return 0;
}
