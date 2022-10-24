#include <stdio.h>
#include <math.h>
int main(){
	
/*
24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]. Go to the editor
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410
*/

int i,x,termNum,sum=0,sign=1,k,ctr;

printf("Input the value of x: ");
scanf("%d",&x);

printf("Input number of terms: ");
scanf("%d",&termNum);

printf("The values of the series: \n");


for(i=0;i<termNum;i++)
{
	ctr=2*i+1;

	k=pow(x,ctr);


	k=k*sign;

	printf("%d\n",k);
	
	sum=k+sum;

	
	sign=-sign;

	

	
}
	

printf("Sum is: %d",sum);



	
}
