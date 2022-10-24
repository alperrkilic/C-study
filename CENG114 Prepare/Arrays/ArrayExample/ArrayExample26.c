#include <stdio.h>
int main(void)
{
	int numbers[25][25];
	int i,j,n;
	
	printf("Input the size of the square matrix: ");
	scanf("%d",&n);
	printf("\nInput elements in the first matrix: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
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
	
	printf("\nSetting zero in lower triangular matrix: \n");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
				printf("%d ",numbers[i][j]);
			}
			else
			{
				printf("%d ",0);
			}
		}
	}
	/* Explanation: 
	
	Let's assume that input is three;
	
	if i is smaller than or equal to j it will print the j of the i'th line
	However, if i is bigger than j it will print 0 that shapes a triangle 
	
	 i  j
	[0][0]= 1		1 2 3
	[0][1]= 2		4 5 6
	[0][2]= 3		7 8 9
	[1][0]= 4 	i>j
	[1][1]= 5
	[1][2]= 6
	[2][0]= 7 	i>j
	[2][1]= 8 	i>j
	[2][2]= 9
	
	
	
	*/
	
	
}