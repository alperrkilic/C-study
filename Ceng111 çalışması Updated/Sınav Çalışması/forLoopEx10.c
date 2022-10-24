#include <stdio.h>
int main(){
	
/*10. Write a program in C to display the pattern like right angle triangle with a number. Go to the editor

The pattern like :

1
12
123
1234

*/	
	
int i,j,number;

printf("Input number of rows : ");
scanf("%d",&number);

for(i=1;i<=number;i++)
{
	for(j=1;j<=i;j++)
	printf("%d",j);
	printf("\n");	
}	
	
return 0;
	
	
}
