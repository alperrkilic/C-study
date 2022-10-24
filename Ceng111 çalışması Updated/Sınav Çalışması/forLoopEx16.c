#include <stdio.h>
int main(){
	
/*	
16. Write a program in C to display the n terms of even natural number and their sum. Go to the editor
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
*/

int natural,i,sum=0;

printf("Input number of terms : ");
scanf("%d",&natural);
printf("The even numbers are: ");

for(i=1;i<=natural;i++)
{
	printf("%d ",i*2);
	sum+=i*2;
		
}	
	
printf("\nThe Sum of even Natural Numbers upto %d terms : %d \n",natural,sum);
		
return 0;	
	
}
