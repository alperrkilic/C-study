#include <stdio.h>
#include <math.h>

int main(){
	
	int number;
	float result;
	printf("Please insert a number: ");
	scanf("%d",&number);
	
	result = sqrt(number);
	
	printf("Square root of %d = %.5f",number,result);
	
	return 0;
	
	
}
