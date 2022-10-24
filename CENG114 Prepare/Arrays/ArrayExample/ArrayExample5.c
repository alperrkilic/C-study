#include <stdio.h>
int main(void)
{
	int i,counter=0,n,j,flag=1;
	int array1[100];
	int array2[100];
	int array3[100];
	
	printf("Please enter the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	printf("Input %d elements in the array: ",n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array1[i]);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		array2[i]=array1[i];
		array3[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(array1[i]==array2[j])
			{
				array3[j]=flag;
				flag++;				
			}
		}
		flag=1;
	}
	
	for(i=0;i<n;i++)
	{
		if(array3[i]==2)
		{
			counter++;
		}
	}
	
	printf("The total number of duplicate elements found in the array is: %d\n",counter);
	
}