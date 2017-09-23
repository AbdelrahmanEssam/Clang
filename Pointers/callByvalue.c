#include <stdio.h>
int cubefun (int a);
int main (void)
{
	int x = 5 ; 
	printf("X is equal %d \n",x);

	printf("X as result of cubefunction is %d \n",cubefun(x));

	printf ("X after cubefunction is done is %d \n",x);


	return 0;

}

int cubefun (int a)
{

return a*a*a;
}
