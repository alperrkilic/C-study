#include <stdio.h>
int main(void)
{
	int array[30];
	int n,i,j;
	int sum1=0;
	int sum2=0;
	int flag;
	
	printf("Please enter number of elements to store in the array: ");
	scanf("%d",&n);
	
	if(n%2==1)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	
	
	printf("\nEnter %d elements: ",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}	
	
	for(i=0;i<n;i=i+2) //0 2 4 6 8
	{
		sum1=array[i]+sum1;
	}
	
	printf("\nsum1: %d",sum1); //suppose n=9 
	
	
	for(i=1;i<n;i=i+2) // 1 3 5 (7 or 8) 
	{
		sum2=array[i]+sum2;
	}
	
	printf("\nsum2: %d",sum2);
	
	if(flag==1)
	{
		if(array[n-2]<array[n-1])
		{
			sum2=sum2-array[n-2];
			sum2=sum2+array[n-1];
		}
	}
	
	printf("\nsum2: %d",sum2);
	
	if(sum1>sum2)
	{
		printf("\nThe maximum sum from the array such that no two elements are adjacent is: %d",sum1);
	}
	else
	{
		printf("\nThe maximum sum from the array such that no two elements are adjacent is: %d",sum2);
	}
	
	
	
}
/*
68. Write a program in C to return maximum sum such that no two elements are adjacent. Go to the editor
Expected Output :
The given array is : 1 3 5 9 7 10 1 10 100
The maximum sum from the array such that no two elements are adjacent is: 122
Click me to see the solution
0 2 4 6 8
1 3 5 7 9
*/