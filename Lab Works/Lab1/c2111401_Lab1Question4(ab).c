//Question 4 Part(a) and Part(b)

/*
//Part(a) Prints the value in the function does not return anything to main.
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
*/

/*
#include <stdio.h>
//Part B prints the value in the main function through parameters. (pointers)
void function(int *x,int *y,int *sum1,int *sum2)
{
	
	
	if(*y>*x)
	{
		int temp=*y;
		*y=*x;
		*x=temp;
		*sum1=*x;
		*sum2=*y;
	}
	else if(*x>*y)
	{

		while(*x!=0)
		{
			*sum1*=10;
			*sum1+=*x%10;
			*x=*x/10;
			
		}
		while(*y!=0)
		{
			*sum2*=10;
			*sum2+=*y%10;
			*y=*y/10;
		}
	}
		
}
int main(void)
{
	int x,y,sum1=0,sum2=0;
	
	printf("Enter two integers: ");
	scanf("%d %d",&x,&y);
	
	function(&x,&y,&sum1,&sum2);
	
	printf("%d %d",sum1,sum2);
	
}
*/