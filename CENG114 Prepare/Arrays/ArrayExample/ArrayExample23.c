#include <stdio.h>
int main(void)
{
	int numbers[25][25];
	int n,i,j;
	int sum=0;
	
	printf("Input the size of the square matrix: ");
	scanf("%d",&n);
	
	printf("\nInput elements of the matrix: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element - [%d],[%d]: ",i,j);
			scanf("%d",&numbers[i][j]);
			printf("\n");
			
			if(i==j)//[0][0] [1][1] [2][2] [3][3] caprazlardaki koordinatlar esitse topla. 
			{
				sum=sum+numbers[i][j];
			}
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
	
	printf("\nAddition of the right diagonal elements is %d.",sum);
	
	
}