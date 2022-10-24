#include <stdio.h>
int main(void)
{
	int array[100];
	int i,n;
	
	printf("Input the number of elements to store in the array(max 15): ");
	scanf("%d",&n);
	
	printf("Input %d number of elements in the array :\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: ",i+1);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	int *p;
	
	p=array;
	
	printf("The elements of array in reverse order are: \n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: %d",i+1,*(p+n-1-i));
		printf("\n");
	}
	
	return 0;
	
}