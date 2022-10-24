#include <stdio.h>
int main(void)
{
	int i,j;
	int array[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element [%d],[%d]: ",i,j);
			scanf("%d",&array[i][j]);
			printf("\n");
		}
	}
	
	printf("The matrix is: \n\n\n");
	
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",array[i][j]);
		}
	}
	
	
}