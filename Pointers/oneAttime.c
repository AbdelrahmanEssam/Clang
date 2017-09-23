#include <stdio.h>
void printName(const char *pName);
int main (void)
{
	char name [] = "This is a very important string";
	printName (name);

	return 0;
}

void printName(const char *pName)
{	int i =0;
	while (pName[i] != '\0')
	{
	printf("%c \t",pName[i]);
	i++ ;
		}

	

}
