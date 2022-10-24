#include <stdio.h>
int main(void)
{
	int i,j=1;
	int *jp1,*jp2 = &j;
	
	jp1=jp2;
	
	i=++(*jp2); //jp2 ve jp1 ayni degeri tuttugu icin *jp1 artik 2 yi isaret eder bi alt satirda *jp1+i yani 2+2 den *jp2=4 oldu *jp1 de ayni degeri isaretledigi icin
				// *jp1 in yeni degeri 4 olmus oldu.
	
	*jp2 = *jp1 + i; //jp1 in icindeki degeri alip i ekledi sonra jp2 nin icindeki kutuya koydu.

	printf("i= %d, j= %d, *jp1= %d, *jp2= %d\n",i,j,*jp1,*jp2);
	
	return 0;
}