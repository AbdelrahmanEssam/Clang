#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char c;
	int C,z; 
	printf("Please enter a character .. \n");
	scanf(" %c",&c);
	z = (int) c;	
	C = toupper (z);
	printf("The upper case letter for %c is %c \n",c,C);

	return 0;
}
