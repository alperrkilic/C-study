#include <stdio.h>
int findPow(int x,int y);
int main(void)
{
	int x,y,result;
	
	printf("Please input x and y: ");
	scanf("%d %d",&x,&y);
	printf("\n");
	result=findPow(x,y);
	printf("result is %d",result);
	
	
}
int findPow(int x,int y)
{
	int i,mult=1;
	
		for(i=1;i<=y;i++)
		{
			mult=mult*x;
			return(mult);
		}
		
}