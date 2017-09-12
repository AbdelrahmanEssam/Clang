#include <stdio.h>

int main (void)
{
        int i,n ;
        printf("Welcome to the Game ..... \n ==============\nLooking for the nth number to be skipped .. \n");
        printf("Please enter a number .. \n");
        scanf(" %d", &n);
        for (i=0;i<100;i++)
        {
        if(i==n) continue ;
        printf("The index is now %d \n",i);

        }


        return 0;
}
