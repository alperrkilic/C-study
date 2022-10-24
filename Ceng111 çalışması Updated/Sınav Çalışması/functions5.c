#include <stdio.h>
int main(){
	
/*	Write a program that inputs n and finds and outputs 1+2+3+...+n
Use function total_n that receives n and outputs sum of 1+2+3...+n	(n is received )
*/	
int n;

//printf("Input n: ");
//scanf("%d",&n);


void total_n(int n) // n will come from the main function.
{
	int i,sum=0;
	
	for(i=1;i<=n;i++)
	sum+=i;
	
	printf("Sum is: %d",sum);
		
}	
	
total_n(3*2); // calling function that takes n as (6 which is the result of 3*2)

return 0;	
	
	
	
}
