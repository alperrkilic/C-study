#include <stdio.h>
int main(){
	
/*
13. Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Go to the editor
   1 
  2 3 
 4 5 6 
7 8 9 10 
*/

int i,j,spc,rows,k,t=1;

printf("Input number of rows: ");
scanf("%d",&rows);
spc=rows+4-1;
for(i=1;i<=rows;i++)
{
	for(k=spc;k>=0;k--)
	{
	printf(" ");	
	}
	for(j=1;j<=i;j++)
	printf("%d ",t++); // t++ increases numbers like 1 2 3 4 5 6... 

	printf("\n");	
	spc--;		
}	

return 0;	
	
}
