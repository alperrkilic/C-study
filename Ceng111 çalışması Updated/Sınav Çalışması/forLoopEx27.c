#include <stdio.h>
int main(){
	
/*
27. Write a c program to check whether a given number is a perfect number or not. Go to the editor
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
Click me to see the solution
*/	
	
int input,sum,i;
sum=0;
printf("Input the number: ");
scanf("%d",&input);
	
printf("The positive divisors are: ");

for(i=1;i<=input/2;i++)
{
	if(input%i==0)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	
}		
	
printf("\nThe sum of the divisors is: %d",sum);	

	if(input==sum)
	{
		printf("\nSo, the number is perfect.");
	}
	else
	{
		printf("\nSo the number is not perfect.");
	}
	
return 0;	
}
