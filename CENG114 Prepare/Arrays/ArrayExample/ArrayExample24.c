#include <stdio.h>
int main(void)
{
	int numbers[25][25];
	int i,j,n,m;
	int sum=0;
	
	printf("Input the size of the square matrix: ");
	scanf("%d",&n);
	m=n;
	printf("\nInput elements of the matrix: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element - [%d],[%d]: ",i,j);
			scanf("%d",&numbers[i][j]);
			printf("\n");
		}
	}
	
	printf("\nThe matrix is: \n");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d ",numbers[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		m=m-1;//n=3 girersek m=3 m=m-1 den m=2 olur 2
		for(j=0;j<n;j++)
		{
			if(j==m)
			{
				sum=sum+numbers[i][j];
			}
		}
	}
	
	printf("\nAddition of the left diagonal elements is: %d",sum);
	/*	Explanation:
	
	 for example inputs are; 
	
	[0],[0]= 1		1	2	3 
	[0],[1]= 2		4	5	6
	[0],[2]= 3		7	8	9
	[1],[0]= 4
	[1],[1]= 5	summation of 7+5+3=15
	[1],[2]= 6	coordinates are;
	[2],[0]= 7	(0,2)=3 , (1,1)=5 , (2,0)=7
	[2],[1]= 8
	[2],[2]= 9
	
		i   j   m=n=3
		0	0	2 
		0	1	2 
		0	2	2 1st line third number
		1	0	1
		1	1	1 2nd line second number
		1	2	1
		2	0	0 3th line first number
		2	1	0
		2	2	0
			
	*/	
	
	
	
}