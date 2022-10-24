#include <stdio.h>
int main(void)
{
	
	int a=5,*ap; // a=5 degerini tutacak pointeri *ap ile tanimliyorum
	float b=3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	
	int numbers[5] = {1,2,3,4,5};
	int *arrayp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	arrayp = &numbers[1];
	
	printf("%u adresindeki intin degeri %d dir.\n",ap,*ap);
	printf("%u adresindeki floatin degeri %f dir.\n",bp,*bp);
	printf("%u adresindeki double degeri %lf dir.\n",cp,*cp);
	printf("%u adresindeki char degeri %c dir.\n",dp,*dp);
	printf("%u adresindeki numbers elemaninin degeri %d dir.\n",arrayp,*arrayp);
	
	//* adresteki degeri verir.
	// ampersant adresi verir.
	
	
	return 0;
}