#include <stdio.h>
int total_n(int x,int y);
int main(){

printf(" // Summation of number from x to y // \n");	
/* Write a program to input m,n & find & output m+...+n
use a function that receives 2 integer paramters & finds & returns sum of integers between those parameters.
*/
int n,m,result;

	printf("Input x and y : ");
	scanf("%d %d",&n,&m);
	
		result = total_n(n,m);

	printf("Sum is %d",result);
	return 0;
	

}

int total_n(int x, int y)
{
	int sum=0,i;
	
		for(i=x;i<=y;i++)	
			sum=sum+i;
			return(sum);
}
