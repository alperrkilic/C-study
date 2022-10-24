#include <stdio.h>
int main(){

/*
25. Write a program in C to display the n terms of square natural number and their sum. Go to the editor
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55 */

int i,n,sum=0;
printf("Input the number of terms: ");
scanf("%d",&n);
printf("The square of Natural upto %d terms are: ",n);

for(i=1;i<=n;i++)
{
	printf("%d ",i*i);
	sum=sum+(i*i);		
}	
	
printf("\nThe Sum of Square Natural Number upto %d terms: %d",n,sum);
	
return 0;	

}
