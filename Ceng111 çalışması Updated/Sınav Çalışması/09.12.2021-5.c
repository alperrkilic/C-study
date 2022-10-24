#include <stdio.h>
int main(){
	
/*
35. Write a program in C to display the first n terms of Fibonacci series. Go to the editor
Fibonacci series 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34
Click me to see the solution */

int termNum,pre=1,prv=0,i,sonraki,sum=1;

printf("Input number of terms: ");
scanf("%d",&termNum);

printf("% 5d % 5d", prv,pre);

for(i=1;i<=termNum;i++)
{
		sonraki=pre+prv;
		sum=sonraki+sum;
		printf("%5d",sonraki);
		
		prv=pre;
		pre=sonraki;
}	
	
printf("\nsum = %d",sum);	
	
	
	
}
