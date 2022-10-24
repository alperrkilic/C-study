#include <stdio.h>
int main(void)
{
	int m=300;
	double fx=300.600006;
	char cht='z';

	int *a=&m;
	double *b=&fx;
	char *c=&cht;
	
	printf("Pointer : Demonstrate the use of & and * operator : \n");
	printf("---------------------------------------------------\n");
	
	printf("Using & operator : \n");
	printf("-------------------------\n");
	
	printf("address of m   : %p\n",&m);
	printf("address of fx  : %p\n",&fx);
	printf("address of cht : %p\n",&cht);
	printf("\n");
	printf("address of m   : %u\n",&m);
	printf("address of fx  : %u\n",&fx);
	printf("address of cht : %u\n",&cht);
	
	printf("\nUsing & and * operator : \n");
	printf("-------------------------\n");
	
	printf("Value at address of m = %d\n",*(&m));
	printf("Value at address of m = %lf\n",*(&fx));
	printf("Value at address of m = %c\n",*(&cht));
	
	printf("\nUsing only pointer operator : \n");
	printf("-------------------------\n");
	
	printf("Value at address of m = %d\n",*a);
	printf("Value at address of m = %lf\n",*b);
	printf("Value at address of m = %c\n",*c);
	
	
	
}