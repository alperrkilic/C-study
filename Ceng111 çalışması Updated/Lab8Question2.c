#include <stdio.h>
int main()
{
//There are 20 students. Since we don't know how many 3rd class students, we should add a 3rd class student counter too.
//Int grade, class, counter, thirdClass, sum (summation of grades)

	
	int grade,Class,counter;
	double thirdClass,sum;
	
	//counter is the number of the students. With while looping statements we are controlling the number of students which is 20.
	//Inside the loop we are informing the user to input class and grade and then we are taking it by scanf
	//with if condition we are finding how many 3rd class students there are.
	//sum+=grade >>> sum= sum+grade 
	while(counter<20)
	{
	printf("Please enter which class student is and his/her grade: ");
	scanf("%d %d",&Class,&grade);
		if(Class==3)
		{
			thirdClass++;
			sum+=grade;
		}
		counter++;
	}	
	printf("Average of 3rd class students is: %.2lf",sum/thirdClass);
	
	return 0;
	
}
