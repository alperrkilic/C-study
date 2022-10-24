#include <stdio.h>
#include <math.h>
int main(){
	
/* Write statements to input ID and height of a student & input id & height of 10 other students. Find the id of the student whose height is closest to
the first student	
*/

int h1,id1,h,id,d,resultid,i;

printf("Input ID and height of Ali: ");
scanf("%d %d",&id1,&h1);

printf("Input ID and height of the student: ");
scanf("%d %d",&id,&h);

d=abs(h1-h);
resultid=id;

for(i=2;i<=10;i++)
{
	printf("Input ID and height of the student: ");
	scanf("%d %d",&id,&h);
	
	if(abs(h1-h)<d)
	{
		d=abs(h1-h);
		resultid=id;	
	}	
}	
printf("The ID of the student whose height is closest to the Ali is: %d",resultid);	
	
return 0;	
	
}
