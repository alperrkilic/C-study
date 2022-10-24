#include <stdio.h>
int main(){
	
int x,LoopCounter,z;
z=0;

printf("Input a number: ",x);
scanf("%d",&x);

for(LoopCounter=2;LoopCounter<x;LoopCounter++)
{
	if(x%LoopCounter ==0)
	{
		printf("%d is not a prime number.",x);
		z=1;
		break;
	}
}

	if(z==0)
	{
		printf("%d is a prime number",x);
	}	
	
return 0;
	
	
	
}
