#include <stdio.h>
int main(void)
{
	int numbers[25][25];
	int n,i,j;
	int Rsum[25];
	int Csum[25];
	
	printf("Inut the size of the square matrix: ");
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
	
	for(i=0;i<n;i++)
	{
		Rsum[i]=0;
		for(j=0;j<n;j++)
		{
			Rsum[i]=Rsum[i]+numbers[i][j];
		}
	}
	
	for(i=0;i<n;i++)//(0,0) (1,0) (2,0)
	{
		Csum[i]=0;
		for(j=0;j<n;j++)
		{
			Csum[i]=Csum[i]+numbers[j][i]; //(0,0) (0,1) (0,2)
		}
	}
	
	printf("\n\nThe sum of rows and columns of the matrix is: \n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",numbers[i][j]);
		}
	printf("%3d",Rsum[i]);
	printf("\n");
	}
	
	for(j=0;j<n;j++)
	{
		printf("%3d",Csum[j]);
	}
	
	
}