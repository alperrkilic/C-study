#include <stdio.h>
int main(){
	
/* write a function that inputs n and finds and outputs 1+2+3...+n use function total_n that receives n and returns sum of 1+2+3...+n */

int n,result;

printf("Input n: ");
scanf("%d",&n);

printf("Result = %d",total_n(n));

}
	
int total_n(int n)
{
	int i,sum=0;
	
		for(i=1;i<=n;i++)
		sum+=i;
		
	return(sum);	
}
		
