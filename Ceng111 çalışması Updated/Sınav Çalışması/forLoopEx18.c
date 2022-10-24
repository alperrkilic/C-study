#include <stdio.h>
int main(){

/*
18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]. Go to the editor
Test Data :
Input the Value of x :2
Input the number of terms : 5
Expected Output :
the sum = -0.415873
Number of terms = 5
value of x = 2.000000
*/

float x,sum,t,d;
int i,n;

printf("Input the Value of x: ");
scanf("%f",&x);
printf("Input the number of terms: ");
scanf("%d",&n);

sum=1;
t=1;

for(i=1;i<n;i++)
{
	d= (2*i)*(2*i-1);
	t= -t*x*x/d;
	sum = sum+t;
}	
	
	
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);

	
	
	
}
