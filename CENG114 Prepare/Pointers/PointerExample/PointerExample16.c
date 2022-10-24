#include <stdio.h>
int main(void)
{
	int n,i,sum=0;
	int *p;
	
	printf("Input the number of elements to store in the array (max 10): ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: ",i+1);
		scanf("%d",p+i);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum + *p;
		p++;
	}
	
	printf("\n%d",sum);
	
	
	
}