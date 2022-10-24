#include <stdio.h>
int main(){
	
/*
29. Write a C program to check whether a given number is an armstrong number or not. Go to the editor
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
Click me to see the solution
*/

int r,number,i,sum=0;

printf("Input a number: ");
scanf("%d",&number);

for(i=number;number!=0;number=number/10) // 153/10 = 3 (3*3*3=27) >> 15 /10 =5 (5*5*5=125) >> 1 (1*1*1=1) 27+125+1 =153 Armstrong number.
{
	r=number%10;
	sum=sum+(r*r*r);
//	printf("%d ",sum);	(just to check)
}	
	
if(sum==i)
	printf("%d is an Armstrong number. \n",i);
else
	printf("%d is not an Armstrong number. \n",i);		
	
return 0;	
}
