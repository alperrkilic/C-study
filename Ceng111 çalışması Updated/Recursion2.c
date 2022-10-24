#include <stdio.h>
int RangeSum(int n);
int main(void)
{
//Write a program in C to calculate the sum of numbers from 1 to n using recursion	

	int n,sum;	
	
	printf("Please enter the last number of the range starting from 1 :");
	scanf("%d",&n);
	
	sum=RangeSum(n);
	
	printf("The sum of numbers from 1 to %d is: %d",n,sum);
	
}

int RangeSum(int n)
{
	
	int result;
	
		if(n==1)
		{
			return(1);
		}
		else
		{
			result=n+RangeSum(n-1); //result=5+rangeSum(4)(4+rangeSum(3)(3+rangeSum(2)(2+RangeSum(1)(1+rangeSum(0))
			printf("%d ",result);
		}
	
		printf("\n");
		
		return(result);
}