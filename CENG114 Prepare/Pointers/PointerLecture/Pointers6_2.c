#include <stdio.h>
#include <string.h>
int StringLength(char *p)
{
	// basic explanation of strlen function //
	int length=0;
	int i;
	
	for(i=0;p[i] != '\0';i++)
	{
		length++;
	}
	
	return length;
	
	
}
int main(void)
{
	char yazi[]="tura";
	
	printf("%d",StringLength(yazi));
	
	
	
}