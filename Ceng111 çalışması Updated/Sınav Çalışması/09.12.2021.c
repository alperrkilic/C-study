#include <stdio.h>
int main(){
	
/*
14. Write a program in C to make such a pattern like a pyramid with an asterisk. Go to the editor

   * 
  * * 
 * * * 
* * * *

*/

int i,j,rows,spc;

printf("Input the number of the rows: ");
scanf("%d",&rows);

spc=rows;

for(i=1;i<=rows;i++)
{
	for(j=spc;j>=1;j--)
		printf(" ");
	
	for(j=1;j<=i;j++)
		printf("* ");
		
	spc--;
	printf("\n");	
	
	
}
	
	
	
	
	
	
}
