#include <stdio.h>
//part A
void function()
{
	int x,y;//x=3 y=4
	int i;
	int xY=1,yX=1;
	
	printf("Please enter the value of x: ");
	scanf("%d",&x);
	
	printf("\nPlease enter the value of y: ");
	scanf("%d",&y);
	
	for(i=0;i<y;i++)
	{
		xY=xY*x;
	}
	for(i=0;i<x;i++)
	{
		yX=yX*y;
	}
	
	printf("\nThe value of x^y is: %d\n",xY);
	printf("\nThe value of y^x is: %d\n",yX);
	
	
}

int main(void)
{
	
	function();
	
	return 0;
}
