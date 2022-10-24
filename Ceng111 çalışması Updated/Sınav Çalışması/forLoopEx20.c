#include <stdio.h>
int main(){

/*20. Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks. Go to the editor

   *
  ***
 *****     */
	
int i,j,k,spc,rows;

printf("Input number of rows: ");
scanf("%d",&rows);
spc=rows+5-1;

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
