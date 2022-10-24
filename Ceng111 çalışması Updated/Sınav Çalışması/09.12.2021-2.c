#include <stdio.h>
int main(){

/*
15. Write a C program to calculate the factorial of a given number. Go to the editor
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/

int number,i,fact=1;	

printf("Input the number: ");
scanf("%d",&number);

for(i=1;i<=number;i++)
{
	fact=fact*i;
}

printf("The factorial of %d is: %d",number,fact);
	
}
