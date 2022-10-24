#include <stdio.h>
#include <string.h>
void changePosition(char *ch1, char *ch2)
{
	char temp;
	temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
	
	
}
void charPermu(char *cht, int startno, int endno)
{
	int i;
	
	if(startno==endno)
	{
		printf("%s ",cht);
	}
	else
	{
		for(i=startno;i<=endno;i++)
		{
			changePosition((cht+startno),(cht+i));
			charPermu(cht,startno+1,endno);
			changePosition((cht+startno),(cht+i));
		}
	}
	
	
	
}

int main(void)
{
	char string[] = "abcd";
	
	printf("\n\nPointer: Generate permutations of a given string:\n");
	printf("--------------------------------------------------------\n");
	
	int n;
	
	n=strlen(string);
	
	printf("The permutations of the string are : \n");
	charPermu(string,0,n-1);
	printf("\n\n");
	
	return 0;
}