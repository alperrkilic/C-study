#include <stdio.h>
#include <string.h>
char *Return(char *p,int index)
{
	int length=strlen(p);
	
	if(index>length)
	{
		return NULL;
	}
	else
	{
		return p+index;
	}
	
	
}
int main(void)
{
	char dizi[]="yazilim";
	char *p=Return(dizi,2);
	
	if(p==NULL)
	{
		printf("Pointer NULL");
	}
	else
	{
		printf("%s",p);
	}	

	//int i=5;
	// int *p=&i; 
	//printf("%d",*p); pointer i nin adresindeki degeri alir ve bastirir (yani 5)
}