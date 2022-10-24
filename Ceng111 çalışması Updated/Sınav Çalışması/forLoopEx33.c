#include <stdio.h>
int main(){
	
/*
Write a program in C to display the such a pattern for n number of rows using a number which will start with the number 1 and the first and a last number of each row will be 1. The pattern is as follows:

   1
  121
 12321
 
 */

	
int i,j,n,spc;

printf("Input number of rows: ");
scanf("%d",&n);
spc=n;
for(i=1;i<=n;i++)
{
	
	for(j=spc;j>=0;j--)
		printf(" ");
		
	for(j=1;j<=i;j++)
		printf("%d",j);
		
	for(j=i-1;j>=1;j--)
		printf("%d",j);
			
	printf("\n");
	spc--;			
}	
	
	
	
}
