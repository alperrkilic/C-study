#include <stdio.h>
void function(char *ch)
{
	if('a'<=*ch && *ch<='z')
	{
		printf("\nLowercase letter.");
	}
	else if('A'<=*ch && *ch<='Z')
	{
		printf("\nUppercase letter.");
	}
	
}

int main(void)
{
	int i;
	char ch;
	
	for(i=0;i<20;i++)
	{
		scanf(" %c",&ch);
		function(&ch);
		printf("\n");
	}
	
	return 0;
}