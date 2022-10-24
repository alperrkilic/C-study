#include <stdio.h>
#include <math.h>
void armstrong(int a,int b)
{
	
	int remainder,sum,control,i;	
	
	
	for(i=a;i<=b;i++)
	{
			while(i!=0)
		{
			remainder=i%10;
			sum+=pow(remainder,3);
			i=i/10;
		}
		
			if(sum==i)
			{
				printf("%d",i);	
			}
		
		sum=0;		
	}
	
}
int main()
{

	int a,b;
	scanf("%d %d",&a,&b);
	armstrong(a,b);
	
}
