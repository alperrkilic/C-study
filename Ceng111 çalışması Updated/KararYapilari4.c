#include <stdio.h>
int main(){
	
// Klavyeden girilen dereceye g�re suyun durumunu yazd�ran program kodlay�n�z.
	
int degree;

printf("Please enter a value in Celsius: ");
scanf("%d",&degree);

	if(degree<=0)
	{
		printf("The water is currently in the solid state of matter!");
	}
	else if(degree>0 && degree<=100)
	{
		printf("The water is currently in the liquid state of matter");
	}
	else
	{
		printf("The water is currently in the gas state of matter");
	}
	
	
	return 0;
	
}
