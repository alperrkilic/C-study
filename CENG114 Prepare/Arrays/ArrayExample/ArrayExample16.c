#include <stdio.h>
int main(void)
{
	int i,n,j,temp;
	int array[100];
	
	printf("Iput the size of array: ");
	scanf("%d",&n);
	
	printf("\nInput %d elements in the array: \n",n);
	
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
			if(array[j]<array[i])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	
	printf("\n\nSecond largest element in the array is: %d",array[n-2]);
	
	
}