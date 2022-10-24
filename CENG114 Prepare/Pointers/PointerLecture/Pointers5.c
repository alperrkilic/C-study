#include <stdio.h>
int main(void)
{
	
	int numbers[5]={1,2,3,4,5};
	
	int *p=numbers;
	
	//*p = &numbers[1];  2 yi tutar.
	
	/*	*p=numbers; veya  *p=numbers[0]  ikisi de aynidir array in baslangic adresini verir.*/
	
	printf("%u\n",p);   //6684160  aralarinda 4 fark var cunku integer deger 4 byte yer kaplar.
	printf("%u\n",p+1); //6684164
	printf("%u\n",p+2); //6684168
	printf("%u\n",p+3); //6684172
	printf("\n");
	
	printf("%d\n",*p);   // 1 degerini bastirir.
	printf("%d\n",*(p+1)); // 2 degerini bastirir.
	printf("%d\n",*(p+2)); // 3 degerini bastirir.
	printf("%d\n",*(p+3)); // 4 degerini bastirir.
	printf("%d\n",*(p+4)); // 5 degerini bastirir.
	
	printf("\n");
	
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	printf("%d\n",p[3]);
	printf("%d\n",p[4]);
	
	//*(p+1) -------> p[1]

}