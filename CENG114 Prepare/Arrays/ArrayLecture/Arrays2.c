#include <stdio.h>
int main(void)
{
	float sum=0.0;
	float numbers[5];
	int i;
	
	for(i=0;i<=4;i++)
	{
		printf("Please enter a number: ");
		scanf("%f",&numbers[i]);
		printf("\n");
	}
	
	for(i=0;i<=4;i++)
	{
		sum=sum+numbers[i];
	}
	
	
	printf("Average of the entered numbers is: %.2f",sum/5);
	
	
	return 0;
	
}