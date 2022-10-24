#include <stdio.h>
int main(){
	
/*	6. Write a program in C to display the multiplication table of a given integer. Go to the editor
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150 */
	
int input,i;
printf("Input the number (Table to be calculated) : ");
scanf("%d",&input);

for(i=1;i<=10;i++)
{
	
printf("%d x %d = %d\n",input,i,input*i);

}	
	
return 0;	
	
	
}
