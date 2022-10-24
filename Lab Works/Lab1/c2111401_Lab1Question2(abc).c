//Part (a),(b),and (c)
/*
//Part(a) For 1 letter prints whether it is uppercase or lowercase
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
*/
/*
//Part (b) For 20 letter it prints whether it is lowercase or uppercase
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
*/
/*
//Part(c) if Uppercase it returns 1 through a parameter, if lowercase it returns 0
#include <stdio.h>
void function(char *ch,int *x)
{
	
	if('a'<=*ch && *ch<='z')
	{
		*x=0;
	}
	else if('A'<=*ch && *ch<='Z')
	{
		*x=1;
	}
	
}

int main(void)
{
	int i,x;
	char ch;
	
	scanf("%c",&ch);
	function(&ch,&x);
	
	printf("%d",x);
	
	return 0;
}
*/