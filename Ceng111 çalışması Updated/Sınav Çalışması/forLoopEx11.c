#include <stdio.h>
int main(){
	
/*11. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row. Go to the editor

The pattern like :

 1
 22
 333
 4444

*/

int i,j,row;

printf("Please enter number of rows: ");
scanf("%d",&row);

for(i=1;i<=row;i++)
{
	for(j=1;j<=i;j++)
	printf("%d",i); // Since we are printing i here it will be the first value of i which is 1 then 2 
	printf("\n");		
}	
	
return 0;	
	
	
	

}
