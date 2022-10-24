#include <stdio.h>
int Addfunction(int x,int y)
{
	int sum;
	
	int *p1=&x;
	int *p2=&y;
	
	sum=*p1+*p2;
	
	return sum;
	
}
int main(void)
{
	int a,b,result;
	
	printf("Input the first number : ");
	scanf("%d",&a);
	
	printf("\nInput the second number : ");
	scanf("%d",&b);
	
	result=Addfunction(a,b);
	
	printf("\nThe sum of %d and %d is %d",a,b,result);
	
	
	
	
	
	
}