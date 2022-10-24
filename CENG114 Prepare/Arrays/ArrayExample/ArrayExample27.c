#include <stdio.h>
int main(void)
{
	int i,j,n;
	int numbers[25][25];
	
	printf("Input the size of the square matrix: ");
	scanf("%d",&n);
	printf("\nInput elements in the first matrix: \n\n");
	
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
	
	printf("\nSetting zero in upper triangular matrix: \n");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d ",numbers[i][j]);
			}
			else
			{
				printf("%d ",0);
			}
		}
	}
	
	return 0;
}