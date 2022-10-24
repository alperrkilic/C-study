#include <stdio.h>
int main(){

int i;	
int findSum(int i1, int i2)
{
	int sum=0;
	for( i=i1;i<=i2;i++)
	sum=sum+i;
	
	return sum;
}

printf("\nSum from 1-15 is:  %d", findSum(1,15));
printf("\nSum from 15-40 is:  %d", findSum(15,40));
printf("\nSum from 40-50 is:  %d", findSum(40,50));

/* function header -> int findSum(int x,int y)
				{
			(curly braces are function body)  
				}
	int (function return type)
	findSum -> function name
	int(x,int y) -> function parameter list
	
	x
		-> findSum ---> int result					
	y
*/
	
}
