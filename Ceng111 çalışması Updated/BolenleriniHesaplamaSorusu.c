#include <stdio.h>

int main(){
	
	int sayi,i;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++) //i yi birden ba�latt�k 0 olursa say�n�n 0 a b�l�m� tan�ms�z olur daha sonra i 1 er 1 er artacak ta ki say�ya e�it olana kadar
		{				 //�rne�in say�m 10 i=1 say�m�n b�lenleri 10,5,2,1 olmal� if ko�uluyla say�n�n 1 den 10 a kadar olan say�lar�n hangisine kalans�z
						 //b�l�nd���n� buluyorum kalans�z b�l�nebiliyorsa zaten b�lendir 
			if(sayi%i==0)
			{
				printf("%d\n",i);
			}
			
		}
	
	
	return 0;
	
}
