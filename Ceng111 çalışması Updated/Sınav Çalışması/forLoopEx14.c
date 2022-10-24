#include <stdio.h>
int main(){
	
/*	
14. Write a program in C to make such a pattern like a pyramid with an asterisk. Go to the editor

   * 
  * * 
 * * * 
* * * *

*/

int i,j,k,spc,rows;
	
printf("Input number of rows: ");
scanf("%d",&rows);
spc=rows+4-1;

for(i=1;i<=rows;i++)
{
	for(k=spc;k>=1;k--)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	printf("* ");
	printf("\n");
	spc--;
}
	
return 0;	
	
	
}
