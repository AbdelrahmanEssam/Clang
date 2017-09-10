#include <stdio.h>


int main (void)
{
        int num1,num2;
        printf("Please enter two numbers separated by space .. \n");
        scanf(" %d %d",&num1,&num2);

if (num1>num2) printf("First number is greater than the second . \n");
else if (num2>num1) printf("Second number is greater than the first . \n");
else if(num1>=num2) printf("First is greater than or equal to second .\n");
else if(num2>=num1) printf("second is greater than or equal to first .\n");
else printf("The two numbers are not equal ! \n");

return 0;
}
