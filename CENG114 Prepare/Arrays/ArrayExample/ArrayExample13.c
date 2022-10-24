#include <stdio.h>
int main(void)
{
	int i,j,temp,n,x;
	int array[100];
	int modified[100];
	
	printf("Input the size of array: ");
	scanf("%d",&n);
	printf("\n");
	
	printf("Input %d elements in the array: ",n);
	printf("\n\n");
	
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
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	
	printf("Input the value to be inserted: ");
	scanf("%d",&x);
	
	printf("\n\nThe exist array list is: \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	
	
	printf("\nAfter insert the list is: \n");


	
	for(i=0;i<n;i++)
	{
		modified[i]=array[i];
	}
	
	modified[n]=x;
	
	
	for(i=0;i<n+1;i++)
	{
		for(j=1+i;j<n+1;j++)
		{
			if(modified[j]<modified[i])
			{
				temp=modified[j];
				modified[j]=modified[i];
				modified[i]=temp;
			}
		}
	}
	
	for(i=0;i<n+1;i++)
	{
		printf("%d ",modified[i]);
	}
	
}