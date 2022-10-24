#include <stdio.h>
#define MAX 50
void largestElement(int arr[],int size)
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
	
	int numbers[MAX];
	
	printf("Input total number of elements (1 to 100): ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Number %d: ",i+1);
		scanf("%d",&numbers[i]);
		printf("\n");
	}
	
	largestElement(numbers,size);
	
	for(i=0;i<size;i++)
	{
		printf("%d ",numbers[i]);
	}
	
	printf("\n\n");
	
	printf("Largest number is: %d",numbers[size-1]);
	
}