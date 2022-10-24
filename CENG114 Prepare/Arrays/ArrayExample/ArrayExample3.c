#include <stdio.h>
int main(void)
{
	int number[100];
	
	int i,x,sum=0;
	
	printf("Please enter the number of elements to be stored in the array: ");
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		printf("Element-%d: ",i);
		scanf("%d",&number[i]);
		sum=sum+number[i];
	}
	
	printf("Sum of all elements stored in the array is: %d",sum);
	
	return 0;
}