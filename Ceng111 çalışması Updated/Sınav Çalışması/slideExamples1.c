#include <stdio.h>
int main(){
	
int k=10;
int y=7;

while(k<2*y)
{
	y--;
	printf("%d ",k-y);
	--y;
	k--;	
}	

printf("%d %d",y,k);	
	
	
return 0;	
	
	
}
