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
		
		if(a!=b && a!=c && b!=c){ //rakamları birbirinden farklı olması için
			counter++;
		}
	}
	
	printf("%d",counter);
	
	return 0;
//Soruda üç basamaklı rakamları birbirinden farklı kaç tane sayı olduğunu bulan bir program kodladık.		
} 
