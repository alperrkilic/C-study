#include <stdio.h>
//Multi dimensional arrays//
int main(void)
{
	
	/*
	
	   1 2 3 > 0th line  1(0,0) 2(0,1) 3(0,2)
	   4 5 6 > 1st line  4(1,0) 5(1,1) 6(1,2)
	   7 8 9 > 2nd line  7(2,0) 8(2,1) 9(2,2)
		      
	*/
	
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	//printf("%d",matris[2][2]); gives us 9
	
	int i,j;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
		
	}
	
	return 0;
	
}