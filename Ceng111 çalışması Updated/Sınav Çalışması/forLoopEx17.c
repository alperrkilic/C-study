#include <stdio.h>
int main(){
	
/*	
17. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row. Go to the editor

   1
  2 2
 3 3 3
4 4 4 4
*/

int i,j,k,spc,rows;

printf("Input number of rows: ");
scanf("%d",&rows);
spc=rows;

for(i=1;i<=rows;i++)
{
	for(k=spc;k>0;k--) //bosluk
	{
		printf(" ");	
	}
	
	for(j=1;j<=i;j++) // sayi
	
		printf("%d ",i);
		printf("\n");
		spc--;
		
}	
	
return 0;	
	
}
