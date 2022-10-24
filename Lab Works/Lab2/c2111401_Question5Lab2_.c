#include <stdio.h>
int main(void)
{

	int array[30];
	int i,number,counter=0,j;
	int x=0,y;
	
	printf("Please input the Number of integers(N) to store in the array(N<30): ");
	scanf("%d",&number);
	
	printf("\nPlease enter %d integers: \n",number);
	
	
	for(i=0;i<number;i++)
	{
		printf("Please enter the element %d: ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<number;i++)
	{
		if(array[i]==-1)
		{
			x++;
			y=i;
		}
	}
	
	for(i=0;i<number;i++)
	{
		for(j=i;j<number;j++)
		{
			if(array[i]==array[j])
			{
				counter++;//array[5]={1,1,3,3,5} second index will be -1 and won't be printed
				
				if(i!=j)
				{
					array[j]=-1;
				}
			}
			
		}
		if(array[i]!=-1)
		{
			printf("\n%d occurs %d times. ",array[i],counter);
		}
		else if(x!=0)
		{
			printf("\n%d occurs %d times. ",array[y],x);
			x=0;
		}
		
		counter=0;	
	}
	
	
}