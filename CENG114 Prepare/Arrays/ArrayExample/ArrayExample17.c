#include <stdio.h>
int main(void)
{
	int i,j,temp,n;
	int array[100];
	
	printf("Input the size of array: ");
	scanf("%d",&n);
	
	printf("\nInput %d elements in the array: \n",n);
	
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
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	
	printf("\nThe Second smallest element in the array is: %d",array[1]);
	
	return 0;
}