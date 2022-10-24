#include <stdio.h>
#define MAX 50
void bubblesort(int arr[],int size)
{
	int i,j;
	int temp;
	
	for(i=0;i<size;i++)
	{
		for(j=1;j<size-i;j++)
		{
			if(arr[j-1]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
	
	
}

int main(void)
{
	int i,size;
	int array[MAX];
	
	printf("Input the number of the elements to store in the array: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	bubblesort(array,size);
	
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
	
}