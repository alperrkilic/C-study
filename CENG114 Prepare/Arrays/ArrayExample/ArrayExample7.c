#include <stdio.h>
int main(void)
{
	int array1[100];
	int array2[100];
	int arraySum[100];
	int i,j,number1,number2,sum,temp;
	
	printf("Input the number of elements to be stored in the first array: ");
	scanf("%d",&number1);
	printf("\n");
	
	for(i=0;i<number1;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array1[i]);
		printf("\n");
	}
	
	printf("Input the number of elements to be stored in the second array: ");
	scanf("%d",&number2);
	printf("\n");
	
	for(i=0;i<number2;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array2[i]);
		printf("\n");
	}
	
	sum=number1+number2;
	
	for(i=0;i<number1;i++)
	{
		arraySum[i]=array1[i];
	}
	
	i=0;
	
	for(j=number1;j<sum;j++)
	{
		arraySum[j]=array2[i];
		i++;
	}
	
	i=0;
	j=0;
	
		for(i=0;i<sum;i++)
	{
	//	printf("i=%2d ",i); // just to understand the logic 
		for(j=0;j<sum;j++) //what happens here is for the outer loop it checks a certain value like when i is eqaul to 0 it compares the other elements with the j loop
		{				// when i is 0 it checks if array1[0]>array1[0=j] and then array1[0]>array1[1=j] array1[0]>array1[2=j] array1[0]>array1[3=j] 
	//		printf("j=%2d ",j); // As we can understand from here is outer loop compares a specific value of the inner loop and changes their places if condition true
			if(arraySum[i]>arraySum[j]) 
			{
				temp=arraySum[i];
				arraySum[i]=arraySum[j];
				arraySum[j]=temp;
			}
		}
	}
	
	printf("\nDescending order of the array is: ");
	
	for(i=0;i<sum;i++)
	{
		printf("%d ",arraySum[i]);
	}
	
	
}