#include <stdio.h>
#define SIZE 100
int linearsearch(const int array[],int key,int size);
int main (void)
{
	int a[SIZE];
	int i,skey,temp;
	printf("Hello , Please enter a search key! \n");
	scanf(" %d",&skey);
	
	for (i=0;i<SIZE;i++)
	{

	a[i] = 2 * i ;
				 }
	
	temp = linearsearch(a,skey,SIZE);
	if (temp != -1)
	{
	printf("CONGRATES ! ,the number you're searching is found , its index is %d \n",temp);

		}else printf("SORRY !, this number doesn't exist\n");


	return 0;
}

int linearsearch(const int array[],int key,int size)
{
	int i;

	for(i=0;i<SIZE;i++)
	{
		if (key == array[i]) return i;
}

	return -1;
}
