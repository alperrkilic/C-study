#include <stdio.h>
int main(){
	
	int input,sum=0,dividedNum=1; //sum should start from 0, divided num starts from 1 because if it is 0 it would be undefined.
	printf("Input the number: ");
	scanf("%d",&input);
	printf("The positive divisors: ");
	
	for(dividedNum=1;dividedNum<=input/2;dividedNum++)
	{
		if(input%dividedNum==0)
		{
			printf("%d ",dividedNum);
			sum+=dividedNum;	
		}
	}
	
	printf("\nThe sum of the divisors are: %d \n",sum);
	if(sum==input)
	{
		printf("So, the number is perfect");
	}	
	else
	{
		printf("So, the number is not perfect");	
	}
	
	return 0;	
}
