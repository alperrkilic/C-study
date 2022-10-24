#include <stdio.h>
int main(){
	
/*7. Write a program in C to display the multipliaction table vertically from 1 to n. Go to the editor
Test Data :
Input upto the table number starting from 1 : 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
*/	
	
int i,input,x;

printf("Input upto the table number starting from 1 : ");
scanf("%d",&input);
printf("Multiplication table from 1 to %d\n",input);

for(i=1;i<=10;i++)
{
	for(x=1;x<=input;x++)
	{
		printf("%d X %d = %d | ",x,i,i*x);
	}
	printf("\n");	
}	
	
	
	
return 0;
	
}
