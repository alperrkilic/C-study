#include <stdio.h>
int main(){
	
/*	
int i;
int factor;

	for(i=1;i<=5;i++)
	{
		factor=factor*i;
	}
		
	printf("Factorial of 5 is: %d",factor);
	
*/	
	
int i,number;
int factorial=1;

printf("Enter the number: ");
scanf("%d",&number);	

for(i=1;i<=number;i++)
{
	factorial=factorial*i;
}	

printf("Result is: %d",factorial);

return 0;


}
