#include <stdio.h>

int main(){
	
	int sayi,i;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++) //i yi birden baþlattýk 0 olursa sayýnýn 0 a bölümü tanýmsýz olur daha sonra i 1 er 1 er artacak ta ki sayýya eþit olana kadar
		{				 //Örneðin sayým 10 i=1 sayýmýn bölenleri 10,5,2,1 olmalý if koþuluyla sayýnýn 1 den 10 a kadar olan sayýlarýn hangisine kalansýz
						 //bölündüðünü buluyorum kalansýz bölünebiliyorsa zaten bölendir 
			if(sayi%i==0)
			{
				printf("%d\n",i);
			}
			
		}
	
	
	return 0;
	
}
