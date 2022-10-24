#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j;
	int *a,temp;
	int n;
	
	printf("Input the number of element to store in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d : ",i+1);
		scanf("%d",a+i);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
	
	printf("\nThe elements in the array after sorting : \n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d : %d \n",i+1,*(a+i));
	}
	
	printf("\n");
	
	
	
}