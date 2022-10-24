#include <stdio.h>
void total_n(void);
int main(){
	
/*	Functions without arguments that return no value
Write a program that inputs n and finds and outputs 1+2+3+...+n
Use function total_n that inputs n and outputs sum of 1+2+3...n	 */

printf(" // Summation of number from 1 to n // \n");

void total_n(void)
{
	int sum=0,i,n;
	
	printf("Please input the number of terms (n): ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		
	sum=sum+i;
	
	printf("Sum = %d",sum);
}

total_n(); // calls the function

return 0;
	
		
	
}
