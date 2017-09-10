#include <stdio.h>

int main (void)
{
	int i =1,grade1=0,grade2=0,x ;

	while (i<=10)
	{
	printf("Enter result\n");
	scanf(" %d",&x);
	
	if (x == 1){
	grade1 ++ ;	
		}else grade2 ++ ;
	i++ ;
		}
	printf("Number of PASSED ones is %d \n",grade1);
	printf("Number of FAILED ones is %d \n",grade2);
	if (grade1 > 8 ) printf("Bonus to instructor! \n");


	return 0;
}
