#include <stdio.h>
int main(void)
{
	/* pointerlar adres bilgisi tutarlar */

	int i=5; //4 byte
	int j;
	
	// (ampersantin anlami i nin adres bilgisini ver demektir).
	// & adres bilgisini verir.
	// * adresteki degeri verir.

	int *p = &i; //pointer 2 byte
	
	printf("%p\n",p); // u ile de bastirilabilir.
	
	printf("%u\n",p); // 6 milyonuncu kutuya gidip yerlestirmis
	
	printf("%d",*p);
	
}