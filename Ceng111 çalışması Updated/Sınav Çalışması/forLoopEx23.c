#include <stdio.h>
int main(){
	
/*
23. Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]. Go to the editor
Test Data :
Input the value of x :3
Input number of terms : 5
Expected Output :
The sum is : 16.375000 (float)
Click me to see the solution
*/
int i,num_term;
float sum,x,no_row;	

printf("Input the value of x: ");
scanf("%f",&x);
printf("Input number of terms: ");
scanf("%d",&num_term);

sum=1;
no_row=1;
	
for(i=1;i<num_term;i++)
{
	no_row=no_row*x/ (float)i;
	sum=sum+no_row;	
}	
	
printf("\nThe sum is : %f\n",sum);	
	
return 0;	
	
}
