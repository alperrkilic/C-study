#include <stdio.h>
int main(){
/*
12. Write a program in C to make such a pattern like right angle triangle with number increased by 1. Go to the editor

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10
   
*/
	
int i,j,rows,k=1;

printf("Input number of rows: ");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{
	
	for(j=1;j<=i;j++)
	printf("%d ",k++);
	printf("\n");
	
}	
	
return 0;	
	
}
