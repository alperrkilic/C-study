#include <stdio.h>
int main(){
	
/*21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. Go to the editor
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105
Click me to see the solution */	
	
long int n,i,t=9;
int sum=0;

printf("Input the number of terms: ");
scanf("%ld",&n);

for(i=1;i<=n;i++)
{
	sum+=t; // sum= sum+t >>> sum =0+9 > sum=9
	printf("%ld  ",t);
	t=t*10+9;	
}	
	
printf("\nThe sum of the series = %d \n",sum);

return 0;

}
