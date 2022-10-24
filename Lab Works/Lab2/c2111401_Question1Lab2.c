#include <stdio.h>
#include <math.h>
void function(int *num, int *rem)
{
	int i;
	
	for(i=0;i<(*rem);i++)
	{
		*num=*num/10;
	}
	
	
}
int main(void)
{
	int i,number,remove;
	int temp;
	
	for(i=1;i<=5;i++)
	{
		printf("\nInput an integer and number of digits to remove from it: ");
		scanf("%d %d",&number,&remove);
		temp=number;
		function(&number,&remove);
		printf("%d is modified as: %d\n",temp,number);
	}

	
}