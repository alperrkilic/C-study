#include <stdio.h>
int main(){
	
/* write statements to input two integers and decide if they are buddies. Two integers are buddies if sum of their divisors are equal to each other.*/	
	
int i,sumx,sumy,x,y,d,j,counter;

printf("Input two integers: ");

scanf("%d %d",&x,&y);

sumx=0;

for(i=1;i<=x/2;i++)
{
	if(x%i==0)
	sumx=sumx+i;
}
sumy=0;

for(j=1;j<=y/2;j++)
{
	if(y%j==0)
	sumy=j+sumy;	
}	
	
if(sumx==y && sumy==x)
counter++;	

printf("%d pairs are buddies.",counter);
	
	
}
