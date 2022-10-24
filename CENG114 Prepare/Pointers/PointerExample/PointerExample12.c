#include <stdio.h>
void factorial(int n,int *f)
{
	int i;
	*f=1;
	
	for(i=1;i<=n;i++)
	{
		*f=*f*i;
	}
		
}
int main(void)
{
	
	int number;
	int fact;
	
	printf("\nFinding factorial of a given number using pointers: \n");
	printf("\n--------------------------------------------------------\n");
	
	printf("Input a number: ");
	scanf("%d",&number);
	
	factorial(number,&fact);
	
	printf("\nThe factorial of %d is : %d",number,fact);
	
	return 0;
	
}