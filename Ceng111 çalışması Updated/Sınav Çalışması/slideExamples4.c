#include <stdio.h>
int main(){

int input,i,max,max2;

printf("Enter an integer: ");
scanf("%d",&max);

for(i=2;i<=10;i++)
{
	printf("Enter an integer: ");
	scanf("%d",&input);
	
	if(input>max) 
	{
		max2=max;
		max=input;
	}
	else if(input>max2) //max2<input<max
	{
		max2=input;
	}
		
}
printf("Biggest integer is: %d",max);
printf("\nSecond largest integer is: %d",max2);


return 0;
}
