#include <stdio.h>
int main(){	
/*
32. Write a C program to determine whether a given number is prime or not. Go to the editor
 Test Data :
Input a number: 13
Expected Output :
13 is a prime number.
Click me to see the solution*/

int number,i,control=0;

printf("Input a number: "); //prime number = "asal sayi" in Turkish. Prime numbers are only divisible by themselves and 1.
scanf("%d",&number);

for(i=2;i<=number-1;i++)
{
	if(number%i==0)
	{
		control++;
	break;
	}
}	
	
if(control==0 && number!=1)
	printf("%d is a prime number. \n",number);
else
	printf("%d is not a prime number. \n",number);		
	
return 0;	

}
