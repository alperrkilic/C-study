#include <stdio.h>
int main(){
	
//Find the number that is entered by user is divisible by 5 or not.
	
int number;

printf("Enter a number: ");
scanf("%d",&number);

	if(number%5==0)
	{
		printf("Number is divisible by 5!");
	}	
	else
	{
		printf("Number is not divisible by 5!");
	}
	return 0;
	
}
