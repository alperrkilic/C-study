#include <stdio.h>
int* findLarger(int *x,int *y);

int main(void)
{
	int number1,number2;
	int *result;
	
	printf("Show a function returning pointer : \n\n");
	
	printf("Input the first number: ");
	scanf("%d",&number1);
	
	printf("Input the second number: ");
	scanf("%d",&number2);
	
	result=findLarger(&number1,&number2);
	
	printf("\nThe number %d is larger. \n\n",*result);

	
}
int* findLarger(int *x,int *y)
{
	if(*x > *y)
	{
		return x;	
	}	
	else
	{
		return y;
	}
	
}