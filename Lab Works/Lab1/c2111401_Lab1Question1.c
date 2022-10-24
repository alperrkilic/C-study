#include <stdio.h>
int main(void)
{
	int a,b,c,d,e;
	int *find;
	
	
	printf("Please enter five integers: ");
	scanf(" %d %d %d %d %d",&a,&b,&c,&d,&e);
	
	
	printf("\nThe variables and their adresses are: \n\n");
	
	printf("First: %d (addr: %p)\n",a,&a);
	printf("Second: %d (addr: %p)\n",b,&b);
	printf("Third: %d (addr: %p)\n",c,&c);
	printf("Fourth: %d (addr: %p)\n",d,&d);
	printf("Fifth: %d (addr: %p)\n",e,&e);
	
	printf("\n\nEnter variable adress: ");
	scanf("%p",&find);
	
	printf("\nValue at given address: ");
	
	if(find==&a)
	{
		printf("%d",a);
	}
	else if(find==&b)
	{
		printf("%d",b);
	}
	else if(find==&c)
	{
		printf("%d",c);
	}
	else if(find==&d)
	{
		printf("%d",d);
	}
	else if(find==&e)
	{
		printf("%d",e);
	}
	
	return 0;
}