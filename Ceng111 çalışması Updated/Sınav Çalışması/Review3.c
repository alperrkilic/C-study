#include <stdio.h>
int main(){

int counter=0;	
char ch;

printf("Enter the sentence: ");

do{


scanf("%c",&ch);

if (ch >= 'A' && ch <= 'Z')
counter++;

}while(ch!='?');	
	
printf("The number of capital letters is: %d",counter);
	
return 0;	
	
}
