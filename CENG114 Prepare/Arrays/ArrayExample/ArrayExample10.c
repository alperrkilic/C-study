#include <stdio.h>
int main(void)
{
	int i,n,j=0,k=0;
	int array[100];
	int odd[100];
	int even[100];
	
	
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: ",i);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			even[k]=array[i];
			k++;
		}
		else if(array[i]%2==1)
		{
			odd[j]=array[i];
			j++;
		}
	}
	
	printf("The odd elements are: ");
	
	for(i=0;i<j;i++)
	{
		printf("%d ",odd[i]);
	}
	
	printf("\nThe even elements are: ");
	
	for(i=0;i<j;i++)
	{
		printf("%d ",even[i]);
	}
	
}