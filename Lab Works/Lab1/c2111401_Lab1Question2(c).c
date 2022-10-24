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