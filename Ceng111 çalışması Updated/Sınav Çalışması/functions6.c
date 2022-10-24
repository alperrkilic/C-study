#include <stdio.h>
int main(){
	
/* Write a program that inputs n and finds and outputs 1+2+3+...n use function total_n that inputs n and returns sum of 1+2+3....+n */	

int total_n(void)
{
	int n,i,sum=0;
	
	printf("Input n: ");
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
		
		sum=sum+i;
		
		return(sum);	
}	


	int result;
	result=total_n();
		

	printf("Result = %d",result);

return 0;
		
}
