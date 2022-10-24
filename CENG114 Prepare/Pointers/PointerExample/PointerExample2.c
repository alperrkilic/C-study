#include <stdio.h>
int main(void)
{
	int m=29;
	
	printf("Address of m: %p\n",&m);
	printf("Value of m: %d\n",m);
	
	int *ab=&m;
	
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : %p\n",ab);
	printf("Content of pointer ab : %d\n",*ab);
	
	*ab=7;
	
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : %p\n",ab);
	printf("Value of m : %d",*ab);
	
	
	
	
}