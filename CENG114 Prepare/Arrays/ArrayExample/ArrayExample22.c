#include <stdio.h>
int main(void)
{
	int numbers1[20][20];
	int transpose[20][20];
	int i,j,row,column;
	
	printf("\nInput the rows and columns of the matrix: ");
	scanf("%d %d",&row,&column);
	
	printf("\nInput elements of the matrix: \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers1[i][j]);
		}
	}
	
	printf("\nThe matrix is: \n");
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%d ",numbers1[i][j]);
		}
	}
	
	printf("\n\nThe transpose of the matrix is: \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			transpose[j][i]=numbers1[i][j];
		}
	}
	
	for(i=0;i<column;i++)
	{
		printf("\n");
		for(j=0;j<row;j++)
		{
			printf("%d ",transpose[i][j]);
		}
	}
	
}