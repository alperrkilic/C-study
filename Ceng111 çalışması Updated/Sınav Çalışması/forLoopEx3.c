#include <stdio.h>
int main(){
	
/*	
3. Write a program in C to display n terms of natural number and their sum.Go to the editor
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/		
	
int counter,n,sum=0;

printf("Input Value of terms : ");
scanf("%d",&n);
printf("The first %d natural number is : ",n);

for(counter=1;counter<=n;counter++)
{
printf("%d ",counter);
sum+=counter;	
}	
printf("\nThe Sum of Natural Number upto %d terms : %d",n,sum);
return 0;	
	
}
