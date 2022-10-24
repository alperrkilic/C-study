#include <stdio.h>
#include <math.h>
int main(void)
{
	int array[4][5]={{0,1,0,0,1},{1,0,1,1,0},{0,1,0,0,1},{1,0,1,0,0}};
	int Decimal[4];
	int i,j,k=0;
	int sum=0;
	int temp[4];
	int p=0;
	
	for(i=0;i<4;i++)
	{
		k=0;
		sum=0;
		for(j=4;j>=0;j--)
		{
			if(array[i][j]==1)
			{
				sum=sum+pow(2,k);
			}
			k++;
		}
		Decimal[i]=sum;
	}
	
	for(i=0;i<4;i++)
	{
		printf("%d ",Decimal[i]);
	}
	
	
	for(i=0;i<4;i++)
	{
		temp[i]=-1;
	}
	
		
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if( i!=j && Decimal[i]==Decimal[j])
			{
				temp[p]=i;
			}
		}
		p++;
	}

	printf("\n");

	for(i=0;i<p;i++)
	{
		printf("%d ",temp[i]);
	}

	for(i=0;i<4;i++)
	{
		if(temp[i]=-1)
		{
			
		}
	}

}
/*
72. Write a program in C to return only the unique rows from a given binary matrix. Go to the editor
Expected Output:
The given array is :
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The unique rows of the given array are :
0 1 0 0 1
1 0 1 1 0
1 0 1 0 0
*/