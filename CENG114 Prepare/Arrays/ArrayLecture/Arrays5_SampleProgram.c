#include <stdio.h>
//Sample array program//
/*
3 5 1 3 2 4 4 4 5 5 9 8 9 7 7

3*5 matris(3 row 5 column)
Matris:

		3  5  1  3  2
		4  4  4  5  5
		9  8  9  7  7

Result:16 17 14 15 14
(Result >- print the sum of the each column
*/
int main(void)
{
	
	int matris[3][5] = {{3,5,1,3,2},{4,4,4,5,5},{9,8,9,7,7}};
	
	int i,j,sum=0;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d  ",matris[i][j]);
		}
	printf("\n");
		
	}
	
	for(j=0;j<=4;j++)
	{
		for(i=0;i<=2;i++)
		{
			sum=sum+matris[i][j];
		}
	
	printf("%d ",sum);
	sum=0;
	}

	return 0;	
}