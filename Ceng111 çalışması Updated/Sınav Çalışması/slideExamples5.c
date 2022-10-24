#include <stdio.h>
int main(){
	
int i,k,j;

for(k=5;k>0;k--)
{
	for(i=1;i<=5;i++)
	printf(".");
	
	for(j=1;j<=2*k-1;j++)
	printf("B");
	printf("\n");
}

return 0;
}
