#include <stdio.h>
int main(void)
{
	
	//char name[] = "Murat";
	//printf("%c",name[1]); (takes u)
	
	char name[20];
	
	printf("Please enter your name: ");
	scanf("%s",name); // we dont need to use & to take the input from the user.
	
	printf("\n");
	printf("Please enter your name : %s",name); 
	// if we write two names like Bayram Alper it will only print Bayram because scanf does not read after the space. However, writing BayramAlper will display as it is
	
	//Note:Dersler icin tesekkurler, scanf konusunda kucuk bir bilgilendirme yapmak istiyorum. Scanf komutunda bosluklarida almak istiyorsaniz, scanf("%[^\n]s",isim); 
	//seklinde kullanabilirsiniz. (Comment of somebody)
	return 0;
}