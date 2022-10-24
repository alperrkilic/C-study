#include <stdio.h>
int main(){
	
/*22. Write a program in C to print the Floyd's Triangle. Go to the editor

1 
01
101 
0101 
10101
*/

int i,j,rows,p,q;

printf("Input number of rows: ");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{
	if(i%2==0)
	{
		p=1;
		q=0;	
	}
	else
	{
		p=0;
		q=1;	
	}
	for(j=1;j<=i;j++)
	
	if(j%2==0)
		printf("%d",p);	
	else
		printf("%d",q);
		
	printf("\n");	
			
}	
	
	
return 0;	
	
}
