#include <stdio.h>
int main(void)
{
	int i,j,n,temp;
	int array[100];
	
	printf("Input the size of array: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1+i;j<n;j++)
		{
			if(array[j]<array[i])
			{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
			}
		}
	}
	
	printf("\nElements of array in sorted ascended order :");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	
}