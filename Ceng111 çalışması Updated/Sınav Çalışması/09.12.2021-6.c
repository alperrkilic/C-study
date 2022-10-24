#include <stdio.h>
int main(){
	
/*
38. Write a program in C to check whether a number is a palindrome or not. Go to the editor
Test Data :
Input a number: 121
Expected Output :
121 is a palindrome number.
Click me to see the solution
*/

int number,remainder,sum=0,i;

printf("Input a number: ");
scanf("%d",&number);

for(i=number;number!=0;number=number/10)
{
	remainder=number%10;
	sum=sum*10+remainder;
	
}	
	
if(sum==i)
{
	printf("Number is palindrome.\n");	
}	
else 	
{
	printf("Number is not palindrome.\n");
}	
	
	
	
	
}
