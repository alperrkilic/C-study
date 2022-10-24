#include <stdio.h>
int main(void)
{
	int array[10];
	int i,number,temp,j;
	
	for(i=0;i<10;i++)
	{
		printf("\nPlease enter element-%d : ",i);
		scanf("%d",&array[i]);
	}
	
	printf("\nPlease enter the number of times to shift the array to the right: ");
	scanf("%d",&number);
	
	printf("\nArray before shifting: ");
	
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	
	printf("\n\nArray after shifting: ");
	
	for(j=1;j<=number;j++)
	{
		temp=array[9];

		for(i=9;i>=1;i--)
		{
			array[i]=array[i-1];
		}
	
		array[0]=temp;
	}

	

	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
}