#include <stdio.h>

int main ()
{
	int blank, line, number, counter, counter2=0;
	
	printf("Please enter number of lines: ");
	scanf("%d", &line);
	
	for (counter=line;counter>0;counter--)
	{
		for(blank=1;blank<=counter-1;blank++)
		printf (" ");
		
		
		for (number=1;number<=counter2;number++)
		printf ("%d", number);
		
		counter2++;
		
		for (number=counter2;number!=0;number--)
		printf ("%d", number);
		
		printf ("\n");
		
	}
	
	return (0);
}
