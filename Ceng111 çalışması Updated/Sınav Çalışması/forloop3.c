#include <stdio.h>
int main(){
//The following program will ask the user to input 5 numbers and print out the maximum and minimum numbers from the set.
int max,min,counter,input;

printf("Input #1 | ");
scanf("%d",&input);

max=input;
min=input;

for(counter=2;counter<=5;counter++)
{
	printf("Input #%d | ",counter);
	scanf("%d",&input);
	
	if(input>max)
	{
		max=input;	
	}	
	if(input<max)
	{
		min=input;
	}
}	
	
printf("The maximum # is %d\n",max);
printf("The minimum # is %d\n",min);
	
return 0;	
	
}
