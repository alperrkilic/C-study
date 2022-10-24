#include <stdio.h>
int main(void)
{
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
		
	int i;

	for(i=0;i<=9;i++)
	{
		printf("element-%d: %d",numbers[i],numbers[i]);
		printf("\n");
	}
	
	
	return 0;
	
}