#include <stdio.h>
int main(void)
{
	
	int i,x,number[100];
	
	printf("Input the number of elements to store in the array: ");
	scanf("%d",&x);
	printf("Input %d number of elements in the array:\n",x);
	
	for(i=0;i<x;i++)
	{
		printf("element-%d: ",i);
		scanf("%d",&number[i]);	
	}
	
	printf("\n");
	printf("The values store into the array are: ");
	
	for(i=0;i<x;i++)
	{
		printf("%d ",number[i]);
	}
	
	printf("\n");
	printf("The values store into the array in reverse are: ");
	
	for(i=x-1;i>=0;i--)
	{
		printf("%d ",number[i]);	
	}	
	
	
	return 0;
	
}