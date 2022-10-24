#include <stdio.h>
int main(void)
{
	int array[50];
	int i,j;
	
	for(i=0;i<50;i++)
	{
		array[i]=i;
	}
	
	for(i=0;i<50;i++)
	{
		for(j=0;j<i;j++)
		{
			array[i]=array[j]+i;
		}
	}
	
	for(i=0;i<50;i++)
	{
		printf("A[%d]= %d \n",i,array[i]);
	}
	
}