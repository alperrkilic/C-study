#include <stdio.h>
//part B
void function(int *p1,int *p2)
{
	int x,y;//x=3 y=4
	int i;
	
	printf("Please enter the value of x: ");
	scanf("%d",&x);
	
	printf("\nPlease enter the value of y: ");
	scanf("%d",&y);
	
	for(i=0;i<x;i++)
	{
		*p1=*p1*y;//p1 =1 // > p1=4 > p1=16 > p1=64
	}
	for(i=0;i<y;i++)
	{
		*p2=*p2*x;
	}
	
}

int main(void)
{
	int xY=1,yX=1; //x^y and y^x
	
	function(&xY,&yX);
	
	printf("\nThe value of x^y is: %d\n",yX);
	printf("\nThe value of y^x is: %d\n",xY);
	
}