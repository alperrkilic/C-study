#include <stdio.h>
#include <string.h>
char *NameDesTages(char *Tag[],int lange, int welcherTag)
{
	
	if(welcherTag>=1 && welcherTag<=7)
	{
		return *Tag[welcherTag-1];
	}
	else
	{
		return NULL;	
	} 
	
	
	
}
int main(void)
{
	char *tage[7]={"montag","dienstag","mittwoch","donnerstag","freitag","samstag","sonntag"};
	

	
	char *p=NameDesTages(tage,7,5);
	
	if(p==NULL)
	{
		printf("NULL");
	}
	else
	{
		printf("%s",p);
	}
	
	
	
}