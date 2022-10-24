#include <stdio.h>
int main(void)
{
	char array[30];
	char letter;
	int number,i,j,k;
	char temp[30];
	
	
	printf("Please enter number of elements to store in the array: ");
	scanf("%d",&number);
	
	k=number;
	
	for(i=0;i<number;i++)
	{
		printf("\nPlease enter element-%d : ",i);
		scanf(" %c",&array[i]);
	}
	
	for(i=0;i<number;i++)
	{
		temp[i]=array[i];
	}
	
	printf("\nEnter character to remove: ");
	scanf(" %c",&letter);
	printf("\n");
	
	for(i=0;i<number;i++)//i=2
	{
		if(array[i]==letter)//array[5]={a,a,b,c,q} letter = b (i=2 j=2)
		{
			for(j=i;j<number;j++)//2->3
			{
				array[j]=array[j+1];//array[2]=b --> array[5]={a,a,c,q,/0}
			}
		number--;//number =4 
		i--;//i=1	
		}
	}
	
	printf("\nArray before removing: ");
	
	for(i=0;i<k;i++)
	{
		printf("%c ",temp[i]);
	}
	
	printf("\nArray after removing: ");
	
	for(i=0;i<=number;i++)
	{
		printf("%c ",array[i]);
	}
	
}