#include <stdio.h>
int main(){
	
/*
28. Write a c program to find the perfect numbers within a given number of range. Go to the editor
Test Data :
Input the starting range or number : 1
Input the ending range of number : 50
Expected Output :
The Perfect numbers within the given range : 6 28
*/

int i,start,end;
int n,sum;

printf("Input the starting range of number: ");
scanf("%d",&start);
printf("Input the ending range of number: ");
scanf("%d",&end);

printf("The perfect numbers withing the given range: ");

for(n=start;n<=end;n++)
{
	i=1;
	sum=0;
	
	for(;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("%d ",n);
}
	
printf("\n");

return 0;	
	
	
}
