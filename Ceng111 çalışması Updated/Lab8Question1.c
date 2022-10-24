#include <stdio.h>
int main(){
	
	int x,y,F=1;
	
	printf("Input x and y: ");
	scanf("%d %d",&x,&y);
	
	while(x*y>0)
	{
		
		if(x*y % 2 ==1)
		{
			for(x; x>0;x--)
			{
				F = 3*F;
			}
			printf("F = %d\n",F);
		}
		else if (x*y %2==0)
		{
			for(y;y>0;y--)
			{
				F=F*y;
			}
			printf("F = %d\n",F);
		}
		
		printf("Input x and y: ");
		scanf("%d %d",&x,&y);
		F=1;
	}
	printf("Goodbye!");
	
	
	return 0;	
	}
