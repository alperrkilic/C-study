#include <stdio.h>
int main(void)
{
	int numbers[100];
	int i,x;
	
	printf("\nPointer : Store and retrieve elements from an array : \n");
	printf("--------------------------------------------------------------\n");
	
	
	printf("Input the number of elements to store in the array: ");
	scanf("%d",&x);
	printf("\n");
	
	for(i=0;i<x;i++)
	{
		printf("element - %d: ",i);
		scanf("%d",&numbers[i]);
		printf("\n");
	}
	
	
	printf("\nThe elements you entered are : \n");
	
	for(i=0;i<x;i++)
	{
		printf("element - %d: %d \n",i,*(numbers+i)); // direk numbers yazdigimiz zaman 0 inci indeksten mi basliyor ? sonra i ekleyerek devam ediyor boylece array printleniyor
	}
	return 0;

}