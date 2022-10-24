#include <stdio.h>
int main(){
	
/*
2. Write a C program to find the sum of first 10 natural numbers. Go to the editor
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55	
	
*/	
	
int naturalNum,sum=0;

printf("The first 10 natural numbers are :\n");

for(naturalNum=1;naturalNum<=10;naturalNum++)
{
	
	printf("%d ",naturalNum);
	sum=sum+naturalNum;
	
}
	printf("\nThe Sum is : %d",sum);

return 0;
}
