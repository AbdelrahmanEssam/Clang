#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	double d;
	const char *string = "100% I love Linux";
	char *stringPtr ;
	
	d = strtod(string,&stringPtr);
	
	printf("The float part is \"%f\" \nString is \"%s\"\n",d,stringPtr);


	return 0;
}
