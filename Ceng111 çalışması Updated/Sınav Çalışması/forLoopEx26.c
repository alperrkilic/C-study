#include <stdio.h>
int main(){
	
/*
26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. Go to the editor
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345
*/

int n,i,sum,k=1;
sum=0;

printf("Input the number of terms: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	printf("%d ",k);
	
	if(i<n)
	{
		printf("+ ");	
	}
	
	sum=sum+k;
	k=k*10+1;	
}	
	
printf("\nThe sum is : %d\n",sum);
		
return 0;	
}
