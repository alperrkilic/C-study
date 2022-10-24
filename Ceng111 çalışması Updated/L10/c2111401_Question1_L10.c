#include <stdio.h>
int main(){

int rows,i,j;
	
	printf("Enter number of lines: ");
	scanf("%d",&rows);

		for(j=1;j<=rows;j++)
	{
			for(i=1;i<j;i++) // it will always print 1 space more till j reaches to the value of rows.
			{
				printf(" ");				
			}
			for(i=1;i<=3;i++) // it will print 3 stars for each line
			{
				printf("*");
			}
			printf("\n");
	}
		
return 0;	
		
}
