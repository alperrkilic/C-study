#include <stdio.h>
int main(void)
{
	int i,j,n;
	int numbers1[20][20];
	int numbers2[20][20];
	int sum[20][20];
	
	printf("Input the size of the square matrix (less than 5): ");
	scanf("%d",&n);
	
	printf("\nInput the elements in the first matrix: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers1[i][j]);
			printf("\n");
		}
	}
	
	printf("\nInput the elements in the second matrix: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers2[i][j]);
			printf("\n");
		}
	}
	
	printf("\nThe first matrix is: \n");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d ",numbers1[i][j]);
		}
	}
	
	printf("\nThe second matrix is: \n");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d ",numbers2[i][j]);
		}
	}
	
	printf("\n\nThe subtraction of two matrix is: ");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			sum[i][j]=numbers1[i][j]-numbers2[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d ",sum[i][j]);
		}
	}
	
	return 0;
}