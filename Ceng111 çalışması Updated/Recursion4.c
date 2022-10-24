#include <stdio.h>
int NumberofDigits(int n);

int main(void)
{
	
	int n,result,temp;

	printf("Please enter an integer: ");
	scanf("%d",&n);
	temp=n;
		
	result=NumberofDigits(n);
	
	printf("The digit number of %d is %d",temp,result);
}

int NumberofDigits(int n)
{
	
	static int result=0;
	
	if(n!=0)
	{
		result++;
		NumberofDigits(n/10);
	}
	
	return(result);
}