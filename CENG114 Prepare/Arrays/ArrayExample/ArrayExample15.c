#include <stdio.h>
int main(void)
{
	int n,i,j,temp,position;
	int array[100];
	
	printf("Input the size of array: ");
	scanf("%d",&n);

	printf("\nInput %d elements in the array in ascending order: \n",n);
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array[i]);
		printf("\n");	
	}	
	
	printf("Input the position where to delete: ");
	scanf("%d",&position);
	
	if(position>=n+1)
	{
		printf("Deletion not possible.\n");
	}
	else
	{	
		for(i=position-1;i<n;i++)
		{
			array[i]=array[i+1];	
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=1+i;j<n;j++)
		{
			if(array[j]<array[i])
			{
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	
	
	printf("The new list is: \n");
	
	for(i=0;i<n-1;i++)
	{
		printf("%d ",array[i]);	
	}	
	
	return 0;
}