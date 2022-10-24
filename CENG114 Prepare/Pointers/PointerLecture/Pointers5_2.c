#include <stdio.h>
int max(int *array,int length)
{
	int i;
	int max=array[0];
	
	for(i=1;i<length;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	
	return max;
	
}
int main(void)
{
	
	int numbers[5]={3,4,42,100,1};
	int Max;
	
	Max=max(numbers,5);
	
	printf("Sayilar dizisinin en buyuk elemani %d dir.",Max);
	
	
	int *p = numbers;
	
	
	
}