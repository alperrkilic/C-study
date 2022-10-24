#include <stdio.h>
int main(){
	
int number,remainder,reverse=0,i,temp;

printf("Enter a number: ");
scanf("%d",&number);

temp=number;

for(i=number;number>0;number=number/10)
{
	remainder=number%10;
	reverse=reverse*10+remainder;	
}	
	
if(temp == reverse)
{
	printf("%d is a palindrome number.",temp);	
}	
else
{
	printf("%d is not a palindrome number.",temp);	
}

return 0;		
	
}
