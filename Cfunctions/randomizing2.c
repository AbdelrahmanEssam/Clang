#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
        int i ;
        srand(time(NULL));
        for (i=0;i<20;i++)
        {
        printf("%d \n",1+(rand()%6));
                }


        return 0;
}
