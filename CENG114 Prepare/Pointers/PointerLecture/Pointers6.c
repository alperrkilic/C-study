#include <stdio.h>
#include <string.h>
int main(void)
{
	char yazi[] = "tura";
	char *p=yazi;
	
	/*  't' //baslangic adresi eger p+1 yaparsam u ya donusur bu yuzden ura bastirdi.
		'u'
		'r'
		'a'
		'\0'
	*/
	
	printf("%s",yazi); //prints tura
	printf("\n");
	printf("%s\n",p+1); //prints ura
	printf("%s\n",p+2); //prints ra
	
	printf("%d",strlen(yazi)); //stringin uzunlugunu strlen fonksiyonu ile yazdirabiliriz
	
}