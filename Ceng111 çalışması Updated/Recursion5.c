#include <stdio.h>
int SumOfDigits(int n);

/*6. Write a program in C to find the sum of digits of a number using recursion. Go to the editor
Test Data :
Input any number to find sum of digits: 25
Expected Output :

The Sum of digits of 25 = 7 */

int main(void)
{
	int n,result,temp;
	
	printf("Please enter an integer: ");
	scanf("%d",&n);
	temp=n;
	
	result=SumOfDigits(n);
	printf("The integer summation of %d is %d",temp,result);
	
	return(0);
}

int SumOfDigits(int n)
{
	int sum;
	
	if(n==0)
	{
		return(0);
	}
	else
	{
		return((n%10)+SumOfDigits(n/10));
	}
	
	return 0;
}