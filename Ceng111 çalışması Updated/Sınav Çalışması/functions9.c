#include <stdio.h>
void factorial(int x);
int main(){
	
/* Write a function that receives an integer parameter & finds outputs its factorial */	
	
factorial(4);	
	
	
	
}

void factorial(int x) //it doesnt take anything from main function therefore we have written void.
{
	int fact=1,i;
	
	for(i=1;i<=x;i++)
		fact=fact*i;
		printf("%d! = %d",x,fact);
	
}
