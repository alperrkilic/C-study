#include <stdio.h>
int main(void)
{
	int i,position,value,n,j,temp;
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
	
	printf("\nInput the value to be inserted: ");
	scanf("%d",&value);
	
	printf("\nInput the Position, where the value to be inserted: ");
	scanf("%d",&position);
	
	printf("\nThe current list of the array: ");
	
	
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
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	
	
	for(i=n-1;i>=position-1;i--)
	{
		array[i+1]=array[i];
	}
	
	array[position-1]=value;
	
	
	printf("\nAfter inserting of the element the new list is: ");
	
	for(i=0;i<=n;i++)
	{
		printf("%d ",array[i]);
	}
	
	
	return 0;
	
}