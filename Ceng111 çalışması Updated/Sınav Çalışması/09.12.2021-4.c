#include <stdio.h>
int main(){
	
/*
31. Write a program in C to display the pattern like a diamond. Go to the editor

    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * 	
*/

int i,rows,spc,j;

printf("Input number of rows (half of the diamond) : ");
scanf("%d",&rows);

spc=rows-1;

for(i=1;i<=rows;i++)
{
	for(j=spc;j>=1;j--)
		printf(" ");
	
	for(j=1;j<=2*i-1;j++)
		printf("*");

		spc--;
		printf("\n");
}
		
for(i=rows-1;i>=1;i--)
{
	for(j=1;j<=rows-i;j++)
		printf(" ");
	for(j=1;j<=2*i-1;j++)
		printf("*");
		
	printf("\n");
		
}	
	
	
	
}
