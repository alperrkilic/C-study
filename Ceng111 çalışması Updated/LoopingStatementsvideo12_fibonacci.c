#include <stdio.h>
int main(){
	
// fibonacci dizisinin ilk 10 eleman�n� listeleyen kodu yaz�n�z.

int a,b,c,i;

a=1;
b=1;

printf("%d\n",a);
printf("%d\n",b);


for(i=1;i<=8;i++)
{
	c=a+b; //c=1+1 = 2 daha sonra a=b=1 ve b=2 Daha sonra, c=2+1 =3, 2=a=b , b=3 ve b�ylece d�ng� devam edecek 1 1 2 3 5 8 13 21 34 55 �eklinde
	a=b;
	b=c;
	printf("%d\n",c);
		
}	
	
	
return 0;	


/*Tribonacci dizisi son 3 eleman toplam�

int a,b,c,d,i;

a=1;
b=1;
c=1;

printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);


for(i=1;i<=8;i++)
{
	d=a+b+c;
	a=b;
	b=c;
	c=d;
	printf("%d\n",d);
}

return 0;

*/	


}
