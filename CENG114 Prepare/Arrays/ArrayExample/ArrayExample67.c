#include <stdio.h>
int main(void)
{
	int i,j,k;
	int array[50][50];
	int row,column;
	int temp;
	
	printf("Please enter each element once.\n");
	printf("Enter number of rows and columns of the matrix: ");
	scanf("%d %d",&row,&column);
	
	
	
	for(i=0;i<row;i++)
	{
		printf("\nEnter %d. row: ",i+1);
		for(j=0;j<column;j++)
		{
			scanf("%d",&array[i][j]);
		}	
	}	
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			for(k=(j+1);k<column;k++)
			{
				if(array[i][j]<array[i][k])
				{
					temp=array[i][j];
					array[i][j]=array[i][k];
					array[i][k]=temp;
				}
			}
		}
	}
	
	printf("\nAfter arranging rows in ascending order: \n");
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%d ",array[i][j]);
		}
	}
	
	printf("\nAfter arranging columns in ascending order: \n");
	
	for(j=0;j<column;j++)
	{
		for(i=0;i<row;i++)
		{
			for(k=i+1;k<row;k++)
			{
				if(array[i][j]<array[k][j])
				{
					temp=array[i][j];
					array[i][j]=array[k][j];
					array[k][j]=temp;
				}
			}
		}
	}
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%d ",array[i][j]);
		}
	}
	
	int value;
	int flag=0;
	
	printf("\n\nArray is sorted, enter the value which you want to find its location: ");
	scanf("%d",&value);	
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(array[i][j]==value)
			{
				printf("\nPosition of %d is: [%d],[%d]",value,i,j);
				flag=1;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	
	
	return 0;
	
}
/*

67. Write a program in C to search an element in a row wise and column wise sorted matrix. Go to the editor
Expected Output :
The given array in matrix form is :
15 23 31 39
18 26 36 43
25 28 37 48
30 34 39 50
The given value for searching is: 37
The element Found at the position in the matrix is: 2, 2

*/