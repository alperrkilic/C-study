#include <stdio.h>
int main(){
	
/*9. Write a program in C to display the pattern like right angle triangle using an asterisk. Go to the editor

The pattern like :

*
**
***
****

*/	
	
int i,j,nstar;
printf("Input number of rows : ");
scanf("%d",&nstar);

for(i=1;i<=nstar;i++) // i determines how many lines are there.
{
	for(j=1;j<=i;j++) //j determines how many stars will be in these lines.
	
		printf("*");
		printf("\n");	
	
}
	
return 0;
	
}
