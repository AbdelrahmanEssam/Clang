#include <stdio.h>
#define SIZE 12
void bubbleSort( int * const pA,const int size);
int main (void)
{
	int a [SIZE] = {2,6,4,18,91,5,0,16,20,40,36,100};
	int i;
	printf("The array before bubble sort is .. \n");
	
	for (i=0;i<SIZE;i++)
	{
		printf("%d\t",a[i]);
					}

	bubbleSort(a,SIZE);
	
	printf("The array after bubble sort is ..\n");

	for (i=0;i<SIZE;i++)
        {
                printf("%d\t",a[i]);
                                        }
	printf("\n");

	return 0;
}

void bubbleSort( int * const pA,const int size)
{
void swapFun (int *pA1,int *pA2);

	int j,k;	
	for (j=0;j<size-1;j++)
	{
	for (k=0;k<size-1;k++)

	{
		if (pA[k]>pA[k+1])
	{
		swapFun(&pA[k],&pA[k+1]);	
						}			
						}
	
				}

}

void swapFun (int *pA1,int *pA2)
{

	int temp = *pA1 ;
	*pA1 = *pA2 ;
	*pA2 = temp;

}

