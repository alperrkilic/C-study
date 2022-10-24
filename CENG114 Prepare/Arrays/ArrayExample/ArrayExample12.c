#include <stdio.h>
int main(void)
{
	int n,i,j,temp;
	int array[100];
	
	printf("Input the size of array: ");
	scanf("%d",&n);
	printf("\n");
	
	printf("Input %d elements in the array: \n",n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: ",i);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1+i;j<n;j++)
		{
			if(array[j]>array[i])
			{
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	
	printf("\nElements of array in sorted descending order: ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	
}