#include <stdio.h>
void triangle(void);
void square(void);
int main(){

/* write a program to display a square or a triangle using '*' depending on user's request either 'S' or 'T' use two functions to draw 
the shape. main function will call these functions.


if user request S the program will draw a square
if user request T the program will draw a triangle

*/	
void square(void)
{
	printf("***\n");
	printf("***\n");
	printf("***\n");
}
	
void triangle(void)
{
	printf("*\n");
	printf("***\n");
	printf("*****\n");	
}	
	



char choice;
printf("Draw square or triangle ? Choose S or T: ");
scanf("%c",&choice);

if(choice == 'S')
{
	square();
}
else if(choice =='T')
{
	triangle();
}
else 
	
	printf("wrong input.");

return 0;

/*
function header -> int findSum(int x,int y)
				{
			(curly braces are function body)  
				}
	int (function return type)
	findSum -> function name
	int(x,int y) -> function parameter list
	
	x
		-> findSum ---> int result					
	y
	
*/		
	
}
