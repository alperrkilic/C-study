#include <stdio.h>
int main(void)
{
	int n1,n2,n3,n4,i,j;
	int numbers1[20][20];
	int numbers2[20][20];
	int multiplication[20][20];
	int k;
	printf("Input the rows and columns of first matrix: ");
	scanf("%d %d",&n1,&n2);
	
	printf("\nInput the rwos and columns of second matrix: ");
	scanf("%d %d",&n3,&n4);
	
	printf("\nInput elements in the first matrix: \n");
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers1[i][j]);
			printf("\n");
		}
	}
	
	printf("\nInput elements in the second matrix: \n");
	
	for(i=0;i<n3;i++)
	{
		for(j=0;j<n4;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers2[i][j]);
			printf("\n");
		}
	}
	
	printf("\nThe first matrix is: \n");
	
	for(i=0;i<n1;i++)
	{
		printf("\n");
		for(j=0;j<n2;j++)
		{
			printf("%d ",numbers1[i][j]);
		}
	}
	
	printf("\nThe second matrix is: \n");
	
	for(i=0;i<n3;i++)
	{
		printf("\n");
		for(j=0;j<n4;j++)
		{
			printf("%d ",numbers2[i][j]);
		}
	}
		
	//multiplication of matrix
      for(i=0;i<n1;i++)
          for(j=0;j<n4;j++)
           multiplication[i][j]=0;
             for(i=0;i<n1;i++)    //row of first matrix
                 { 
                   for(j=0;j<n4;j++)    //column of second matrix
                     {  
                    int sum=0;
                         for(k=0;k<n2;k++)
                           sum=sum+numbers1[i][k]*numbers2[k][j];
                           multiplication[i][j]=sum;
                     }
                 }
	printf("\nThe multiplication of two matrices is : \n");
  
  	for(i=0;i<n1;i++)
     {
        printf("\n");
        for(j=0;j<n4;j++)
         {
           printf("%d\t",multiplication[i][j]);
         }
     }
  }