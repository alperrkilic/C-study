#include <stdio.h>
int main(void)
{
	int array[100];
	int i,j,n,max,min;
	
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	max=array[0];
	min=array[0];
	
	for(i=0;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		
		if(array[i]<min)
		{
			min=array[i];
		}
		
	}
	
	printf("%d is MAX\n",max);
	printf("%d is MIN\n",min);
	
	
}