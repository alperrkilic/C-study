#include <stdio.h>
int term;
int fibonacci(int previousNum,int num);

int main(void)
{
	static int previousNum,num;
	
	previousNum=0;
	num=1;
	
	printf("Input number of terms for the Series (< 20) : ");
	scanf("%d", &term);
	
	printf("The Series are : "); 
	printf("1 ");
	
	fibonacci(previousNum,num);
    printf("\n\n");
	
}
int fibonacci(int previousNum,int num)
{
	static int i=1;
	int nextNum;
	
	if(i==term)
	{
		return(1);
	}
	else
	{
		nextNum=previousNum+num;
		previousNum=num;
		num=nextNum;
		
		printf("%d ",nextNum);
		
		
		i++;
		
		fibonacci(previousNum,num);
		
	
	return(0);
	}
	
}