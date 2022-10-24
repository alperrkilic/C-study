#include <stdio.h>
void valueChange(int *a,int *b);
//Call by referrence method.
int main(void)
{
	int x=5,y=10;
	
	valueChange(&x,&y);
	
	printf("x:%d y:%d",x,y);
	
}
void valueChange(int *a,int *b)
{
	int temp;
	
	temp=*a;
	
	*a = *b;
	*b = temp;
	
	// (ampersantin anlami i nin adres bilgisini ver demektir).
	// & adres bilgisini verir.
	// * adresteki degeri verir.
		
}