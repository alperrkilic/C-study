#include <stdio.h>
int main(){
//Find whether the number inputted by the user is divisible by 5 or 3. 

int number;

printf("Please enter a number: ");
scanf("%d",&number);
	
	
if(number%5==0 || number%3==0)
{
	printf("The number is divisible by 5 or 3");
}	
else
{
	printf("The number is not divisible by 5 or 3");	
}	
	return 0;
	
	
}
