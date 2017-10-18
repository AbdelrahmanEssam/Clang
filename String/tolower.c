#include <stdio.h>

int main (void)
{

	char c ;
	int z;
	printf("Enter a character ... \n");
	scanf(" %c",&c);
	z = (int) c;
	if (z >=65 && z<=91)
	{
		z += 32 ;
	printf("The lower case letter of %c is %c \n",c,z);
			}else printf("Please enter an upper case case letter ! \n");	
	return 0;
}

