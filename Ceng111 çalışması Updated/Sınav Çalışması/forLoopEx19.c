#include <stdio.h>
int main(){
	
/*	
19. Write a program in C to display the n terms of harmonic series and their sum. Go to the editor
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334
Click me to see the solution */
	
	
int i,n;
float sum;

printf("Input the number of terms: ");
scanf("%d",&n);
printf("\n\n");

for(i=1;i<=n;i++)
{
	if(i<n)
	{
		printf("1/%d + ",i);
		sum+=1/(float)i;	
	}
	if(i==n)
	{
		printf("1/%d",i);
		sum+=1/(float)i;	
	}	
}	
	
printf("\nSum of Series upto %d terms : %f \n",n,sum);
	
return 0;	
	
}
