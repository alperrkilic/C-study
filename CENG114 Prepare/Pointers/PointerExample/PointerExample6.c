#include <stdio.h>
int Max(int a,int b)
{
	int *p1=&a;
	int *p2=&b;

	if(*p1>*p2)
	{
		return *p1;
	}
	else
	{
		return *p2;
	}
}
int main(void)
{
	int x,y,result;
	
	printf("Input the first number : ");
	scanf("%d",&x);
	
	printf("\nInput the second number : ");	
	scanf("%d",&y);	
	
	result=Max(x,y);
	
	printf("\n%d is the maximum number",result);
	
}