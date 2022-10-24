#include <stdio.h>
int main(){
	
	int number;
	printf("Please enter a number: ");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("Number is even!");
	}
	else
	{
		printf("Number is odd!");
	}
	
	return 0;
	
	
	
	
}
