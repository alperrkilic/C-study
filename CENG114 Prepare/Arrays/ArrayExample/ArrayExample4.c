#include <stdio.h>
int main(void)
{
	int number[100],copy[100];
	int x,i;
	
	printf("\n\nCopy the elements one array into another array :\n");
    printf("----------------------------------------------------\n");
    printf("\n");
	
	printf("Please input the number of elements to be stored in the array: ");
	scanf("%d",&x);
	printf("\n");
	
	for(i=0;i<x;i++)
	{
		printf("Element-%d: ",i);
		scanf("%d",&number[i]);
		printf("\n");
	}
	
	for(i=0; i<x; i++)
    {
        copy[i] = number[i];
    }
	
	printf("The elements stored in the first array are: ");
	
	for(i=0;i<x;i++)
	{
		printf("%d ",number[i]);
	}
	
	printf("\n");
	printf("The elements stored in the copied array are: ");
	
	for(i=0;i<x;i++)
	{
		printf("%d ",copy[i]);
	}
	
}