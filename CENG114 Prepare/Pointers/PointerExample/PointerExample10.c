#include <stdio.h>
int stringlength(char *p)
{
	int length=0;
	int i;
	
	for(i=0;p[i]!='\0';i++)
	{
		length++;
	}
	
	return length;
	
	
	
}
int main(void)
{
	char string[100];
	
	printf("Input a string : ");
	scanf("%s",&string);
	
	int result;
	
	result=stringlength(string);
	
	printf("The length of the given string %s is : %d",string,result);
	
	
}