#include <stdio.h>
int main(void)
{
	
	int i,n,j,counter;
	int array[100];
	int frequency[100];
	
	
	printf("Input the number of elements to store in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	printf("Input %d elements in the array: \n",n);
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: ",i);
		scanf("%d",&array[i]);
		printf("\n");
		frequency[i] = -1;//kac kere oldugunu bulmak icin bi array daha olusturuyorum (hepsine -1 verdim)
	}
	

	for(i=0;i<n;i++)//her elemani kontrol eder
	{
		counter=1;//counter her seferinde 1 olsun ki her elemanin sayisini bastan hesaplayabilsin
		for(j=1+i;j<n;j++)
		{
			if(array[i]==array[j])//i. eleman ile j. eleman esitse counter 1 artir (for loopun icinde kac kere esit olursa hesaplar)
			{
				counter++;
				frequency[j]=0;
			}
		}
		if(frequency[i] != 0)
		{
			frequency[i]=counter;
		}
	}
	
	printf("The frequency of all elements of the array: \n");	
	
	for(i=0;i<n;i++)
	{
		if(frequency[i]!=0)
		{
			printf("%d occurs %d times\n",array[i],frequency[i]);
		}
	}
	
	
	return 0;
}