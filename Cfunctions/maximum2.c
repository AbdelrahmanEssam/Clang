#include <stdio.h>
#include "Abdelrahmaninfo.h"

int main (void)
{
	int x,y,z;
	printf("Please enter three numbers .. \n");
	scanf(" %d %d %d", &x,&y,&z);
	printf("Maximum is %d \n",maximum(x,y,z));

	return 0;
}
