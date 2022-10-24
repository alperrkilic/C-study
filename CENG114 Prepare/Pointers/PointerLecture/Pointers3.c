#include <stdio.h>
void valueChange(int a,int b);
// Call by value method
int main(void)
{
	
	int x=5,y=10;
	//local variables
	
	valueChange(x,y);
	
	printf("x:%d y:%d",x,y);
	
	/* -OUTPUT-
	a:10 b:5
	x:5 y:10
	*/
	
}
void valueChange(int a,int b)
{
	int temp;
	
	temp=a;
	
	a=b;
	b=temp;

	printf("a:%d b:%d\n",a,b);
	
}