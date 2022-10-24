#include <stdio.h>
void setPercentages();
float setHomeworkPercentage();
float setMidtermPercentage();
float setFinalPercentage();
int getTotalGrade(int hw, int mt, int final);
char getLetterGrade(int overall);

int homeworkPercentage;
int midtermPercentage;
int finalPercentage;

int main(void)
{
	int flag=1;
	char letter;
	int hwgrade1,mtgrade1,finalgrade1,counter=1;
	int hwgrade2,mtgrade2,finalgrade2;
	int hwgrade3,mtgrade3,finalgrade3;
	int average1,average2,average3;
	int Course1=0,Course2=0,Course3=0;
	
	printf("Welcome to course grading system!\n");
	printf("Please set homework, midterm and final percentages first.\n");
	setPercentages();
	printf("Done.\n");
	
	while(flag==1)
	{
		printf("\n(Student %d) Enter homework, midterm and final grades for first course: ",counter);
		scanf("%d %d %d",&hwgrade1,&mtgrade1,&finalgrade1);
		average1=getTotalGrade(hwgrade1,mtgrade1,finalgrade1);
		Course1=Course1+average1;
		
		printf("\n(Student %d) Enter homework, midterm and final grades for second course: ",counter);
		scanf("%d %d %d",&hwgrade2,&mtgrade2,&finalgrade2);
		average2=getTotalGrade(hwgrade2,mtgrade2,finalgrade2);
		Course2=Course2+average2;
		
		printf("\n(Student %d) Enter homework, midterm and final grades for third course: ",counter);
		scanf("%d %d %d",&hwgrade3,&mtgrade3,&finalgrade3);
		average3=getTotalGrade(hwgrade3,mtgrade3,finalgrade3);
		Course3=Course3+average3;
		
		
		printf("\n(Student %d) Grade for first course is: %c (%d)",counter,getLetterGrade(average1),average1);
		printf("\n(Student %d) Grade for first course is: %c (%d)",counter,getLetterGrade(average2),average2);
		printf("\n(Student %d) Grade for first course is: %c (%d)",counter,getLetterGrade(average3),average3);
		
		counter++;
		
		printf("\n\nDo you want to enter an another student? (Y/N): ");
		scanf(" %c",&letter);
		printf("\n");
		
		if(letter!='Y')
		{
			flag=0;
		}
		
	}
	
	float div=counter-1;
	
	printf("\nFirst course average: %f",Course1/div);
	printf("\nSecond course average: %f",Course2/div);
	printf("\nThird course average: %f",Course3/div);
	
	printf("\nBye!\n");
	
	return 0;
}
void setPercentages()
{
	homeworkPercentage=setHomeworkPercentage();
	midtermPercentage=setMidtermPercentage();
	finalPercentage=setFinalPercentage();
}
float setHomeworkPercentage()
{
	float homeworkP;
	printf("Please enter homework percentage: ");
	scanf("%f",&homeworkP);
	printf("\n");
	return homeworkP;
}
float setMidtermPercentage()
{
	float midtermP;
	printf("Please enter midterm percentage: ");
	scanf("%f",&midtermP);
	printf("\n");
	return midtermP;
}
float setFinalPercentage()
{
	float finalP;
	printf("Please enter final percentage: ");
	scanf("%f",&finalP);
	printf("\n");
	return finalP;
}
int getTotalGrade(int hw, int mt, int final)
{
	return ((hw*homeworkPercentage+mt*midtermPercentage+final*finalPercentage)/100);
}
char getLetterGrade(int overall)
{
	if(overall<=44)
	{
		return 'F';
	}
	else if(overall<=59)
	{
		return 'D';
	}
		else if(overall<=74)
	{
		return 'C';
	}
		else if(overall<=89)
	{
		return 'B';
	}
		else if(overall<=100)
	{
		return 'A';
	}
	
}