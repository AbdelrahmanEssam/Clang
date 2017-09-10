#include <stdio.h>

int main (void)
{

	int x;
	printf("Please enter your grades .. \n");
	scanf(" %d",&x);
	printf("%s\n", x >= 60 ? "PASSED" : "FAILED" );

	return 0;
}
