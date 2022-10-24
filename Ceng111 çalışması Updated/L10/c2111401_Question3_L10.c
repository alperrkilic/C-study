#include <stdio.h>
int main(){
	
int number,sum=0,i,sum2=0,square;	
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
			for(i=1;i<=number;i++)
			{
				sum=sum+i;	
			}
				square=sum*sum;
			for(i=1;i<=number;i++)
			{
				sum2=sum2+i*i;			
			}
	
	printf("Square of sum: %d\n",square);
	printf("Sum of square: %d\n",sum);
	printf("Result: %d\n",square-sum2);
		
	
	
}
