#include <stdio.h>

int main(){
	
	int counter=0;
	int i;
	int a,b,c;
	
	
	for(i=100; i<=999; i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		
		if(a!=b && a!=c && b!=c){ //rakamlar� birbirinden farkl� olmas� i�in
			counter++;
		}
	}
	
	printf("%d",counter);
	
	return 0;
//Soruda �� basamakl� rakamlar� birbirinden farkl� ka� tane say� oldu�unu bulan bir program kodlad�k.		
} 
