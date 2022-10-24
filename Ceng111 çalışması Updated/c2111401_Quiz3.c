#include <stdio.h>

void function(void)
{
	int a,b,min,max,counter=1,counterMin,counterMax,i;
	scanf("%d",&a);
	min=a;
	max=a;
	
		for(i=1;i<=4;i++)
		{
			scanf("%d",&b);
			counter++;
			
				if(b<min)
				{
					min=b;
					counterMin=counter;
				}
				else if(b>max)
				{
					max=b;
					counterMax=counter;
				}
			
		}
	
	printf("Highest Value: %d, Position:%d\n",max,counterMax);
	printf("Lowest Value: %d, Position:%d",min,counterMin);
}
int main(void)
{
	
function();	
return 0;	
	
}