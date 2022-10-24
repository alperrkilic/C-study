#include <stdio.h>
int main(){
	
/*15. Write a C program to calculate the factorial of a given number. Go to the editor
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120 */	

int i,f=1,num;

printf("Input the number: ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
	f=f*i;
}


printf("The factorial of %d is: %d\n",num,f);


		
return 0;
}
