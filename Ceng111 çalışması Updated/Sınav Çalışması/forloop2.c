#include <stdio.h>
int main(){
	
int counter,sum=0,input;

for(counter=1;counter<=10;counter++)
{
	printf("Enter #%d | ",counter);
	scanf("%d",&input);
	sum+=input;
	
}	

	printf("Total Sum of 10 numbers = %d\n",sum);


	return 0;	
}
