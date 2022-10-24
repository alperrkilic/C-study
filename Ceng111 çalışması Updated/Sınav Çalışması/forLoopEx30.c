#include <stdio.h>
int main(){
	
/*30. Write a C program to find the Armstrong number for a given range of number. Go to the editor
Test Data :
Input starting number of range: 1
Input ending number of range : 1000
Expected Output :
Armstrong numbers in given range are: 1 153 370 371 407
Click me to see the solution*/

int start,end,i,r,sum,k;


printf("Input starting number of range: ");
scanf("%d",&start);
printf("Input ending number of range: ");
scanf("%d",&end);

printf("Armstrong numbers in given range are: ");

for(i=start;i<=end;i++)
{
	sum=0;
	k=i;
	
	for(k=i;k!=0;k=k/10)
	{
		r=k%10;
		sum=sum+(r*r*r);
	}
	
	if(sum==i)
	printf("%d ",i);
	

}	
printf("\n");	
return 0;	
}
