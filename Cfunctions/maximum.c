#include <stdio.h>
int maximum (int a,int b,int c);
int main (void)
{
	int x,y,z;
	printf("Welcome , Please enter three numbers .. \n");
	scanf(" %d %d %d",&x,&y,&z);
	printf("The maximum number is %d \n",maximum(x,y,z));

	return 0;
}

int maximum (int a,int b,int c)
{
	if (a>b && a>c) return a;
	else if (b>a && b>c) return b;
	else return c;
}
