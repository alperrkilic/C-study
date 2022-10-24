#include <stdio.h>
int main(){
int x;

/*	
for(x=8; x<=88 ; x+=8) // x=x+8
{
	printf("%d ",x);
}
	return 0;
*/	


/*
for(x=100;x>=0;x--)
{
	printf("%d ",x);
}

return 0;

*/

int sum=0;
for(x=1;x<=50;x++)
{
	sum+=x;
}

printf("1+2+...+50 = %d",sum);



}
