#include <stdio.h>
int main(){
	
/*4. Write a program in C to read 10 numbers from keyboard and find their sum and average. Go to the editor
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000 */	
	
int number,sum=0,loopc;
float average;

printf("Input the 10 numbers : \n");

for(loopc=1;loopc<=10;loopc++)
{

printf("Number-%d : ",loopc);
scanf("%d",&number);
sum+=number;		
}	

average= sum/10;
printf("The sum of 10 no is : %d\n",sum);
printf("The average is : %f\n",average);


return 0;	
	
}
