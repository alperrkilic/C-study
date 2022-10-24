#include <stdio.h>
int main(void)
{
	char string[50];
	char *p;
	int counterVowel=0,counterConsonant=0;
	
	printf("\nPointer : Count the number of vowels and consonants :\n");
	printf("\n-------------------------------------------------------------\n");
	
	printf("Input a string: ");
	
	scanf("%s",&string);
	
	p=string;
	
	while(*p!='\0')
	{
		if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            counterVowel++;
        else
            counterConsonant++;
        p++; //pointer is increasing for searching the next character
    }
	
	printf("\nNumber of vowels : %d\n",counterVowel);
	printf("Number of consonants : %d\n",counterConsonant);
	
}