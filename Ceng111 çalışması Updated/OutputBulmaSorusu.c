#include <stdio.h>
int main(int argc, char*argv[]){
	

		
		int a=5;
		int b=4;
		int c=1;
		int i;
		
		a=b*a+c-4; //5*4=20+1-4=17 a=17
		b=c*a+2; // b=1*17+2 b=19
		for(i=0;i<=3;i++) //i=0 olur, 1 olur, 2 olur, 3 olur yani c yi 4 kere arttýracaðýz.
		{
			c=c+1; // 2= 1+1, 3=2+1, 4=3+1 , 5=4+1 c nin son deðeri 5 
		}
		
		int toplam=a+b+c;
		printf("%d",toplam);
	
	// 19+17+5 = 41 will be the output.
	
	return 0;
		
	}
	
	
	
		

