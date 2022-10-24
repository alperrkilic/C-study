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

int i,j,rows;

printf("Input number of rows (half of the diamond): ");
scanf("%d",&rows);

	for(i=0;i<=rows;i++) // first half
{
		for(j=1;j<=rows-i;j++)   // this loop controls the spaces. when we say rows-1 and row=5 the firs space will be 4 when i=2 second space will be 3 
			printf(" ");		// As a result, this will give the shape of the diamond's first half.	 
	
		for(j=1;j<=2*i-1;j++) // this loop controls the number of stars in each line. when i=1 it will print 1 star when i=2 it will print 2*2-1=3 stars
			printf("*");	 //Since we want it to print like 1 3 5 7 stars it is (2*i-1) 
		printf("\n");	
}
	
	for(i=rows-1;i>=1;i--) //now the other half of the diamond which will decrease its stars and lines will be 1 less since the least line of the 1st
{						  //half of the diamond and second half will use it together.
		for(j=1;j<=rows-i;j++)
			printf(" ");
		
		for(j=1;j<=2*i-1;j++)
			printf("*");
			printf("\n");			
}
	
return 0;	
	
}
