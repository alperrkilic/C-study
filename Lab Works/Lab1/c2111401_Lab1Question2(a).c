#include <stdio.h>
void function(char *ch)
{
	if('a'<=*ch && *ch<='z')
	{
		printf("\nLowercase letter.\n");
	}
	else if('A'<=*ch && *ch<='Z')
	{
		printf("\nUppercase letter.\n");
	}
	
}

int main(void)
{
	char ch;
	scanf("%c",&ch);
	
	function(&ch);
	
}