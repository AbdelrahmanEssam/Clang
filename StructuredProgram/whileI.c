#include <stdio.h>

int main (void)
{
	float total = 0,average = 0 ;
	int i=1 ;
	float grade;
	
	printf("Please enter the grades of the students (10 grades) . \n");
	while (i<=10)
	{
	scanf(" %f", &grade);
	total += grade ; 
	i++;	}
	average = total / 10 ; 
	printf("The average is %f \n",average);
	return 0;
}
