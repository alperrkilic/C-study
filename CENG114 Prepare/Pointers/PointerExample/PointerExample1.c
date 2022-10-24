#include <stdio.h>
int main(void)
{
	int m=10;
	int o,n;

	printf("Pointer : Show the basic declaration of pointer\n");
	printf("Here is m=10, n and o are two integer variable and *z is an integer\n");
	
	int *z=&m;

	
	printf("z stores the address of m = %p\n",z);
	printf("*z stores the address of m = %u\n",*z);
	printf("&m is the address of m = %p\n",&m);
	printf("&n stores the address of n = %p\n",&n);
	printf("&o stores the address of o = %p\n",&o);
	printf("&z stores the address of z = %p\n\n", &z);
}