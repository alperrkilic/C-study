#include <stdio.h>
int main(){
	
int num,remainder,sum=0,t;

printf("Input a number: ");
scanf("%d",&num);

for(t=num;num!=0;num=num/10)
{
	remainder=num%10; // num=121
	sum=sum*10+remainder;	
}	
	
if(t==sum)
	printf("%d is a palindrome number. \n",t);
else
	printf("%d is not a palindrome number.\n",t);	
	
	
	
	
}
