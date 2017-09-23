#include <stdio.h>
#include <ctype.h>
void upperfun (char s[12]);
int main (void)
{
	char string [] = "abdelrahman" ;
	printf("The string is %s\n",string);
	upperfun (string);
	printf("String after modification is %s \n",string);

	return 0;
}

void upperfun (char s[12])
{
	int i;

	for (i=0;i<12;i++)
	{
	if ( s[i] !='\0' )
	{
	s[i] = toupper (s[i]);
		}

			}
}
