#include <stdio.h>

void function(int *x,int *y)
{
	int sum=0;
	int sum2=0;
	
	
	if(*y>*x)
	{
		int temp=*y;
		*y=*x;
		*x=temp;
		sum=*x;
		sum2=*y;
	}
	else if(*x>*y)
	{

		while(*x!=0)
		{
			sum*=10;
			sum+=*x%10;
			*x=*x/10;
			
		}
		while(*y!=0)
		{
			sum2*=10;
			sum2+=*y%10;
			*y=*y/10;
		}
	}
	
		printf("\n%d %d",sum,sum2);
	
}
int main(void)
{
	int x,y;
	
	printf("Enter two integers: ");
	scanf("%d %d",&x,&y);
	
	function(&x,&y);
	
}