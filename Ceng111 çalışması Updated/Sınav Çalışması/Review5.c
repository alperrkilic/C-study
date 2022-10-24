#include <stdio.h>
int main(){
	
/* write statements to find sum of first 10 terms in the series expansion

1/1! - 1+3/2! + 1+3+5/3! - 1+3+5+7/4! + ...	

*/


double num,sign,sum,i,denom,k,j;
denom=1;
num=0;
sign=1;
sum=0;


for(i=1;i<=3;i++)
{
	for(j=1;j<=2*i-1;j+=2)
		num=num+j;
		
	for(k=1;k<=i;k++)
		denom=denom*k;
		
	sum+=(1.0)*sign*num/denom;
		
	
	num=0;
	denom=1;
	sign=-sign;
	
	
}
	
printf("sum=%.2lf ",sum);
	
	
	
	
}
