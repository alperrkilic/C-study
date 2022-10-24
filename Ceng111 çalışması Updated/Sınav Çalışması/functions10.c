#include <stdio.h>
#include <math.h>
double findReal(int x,int y);
int main(){
	
/* write a function that receives 2 integer parameters (1st representing integral part 2nd representing demical part of a real number
it will generate a real number using the parameters & returns them to the calling function */	

double z = findReal(5,273);

findReal(5,273);	
	
}

double findReal(int x,int y) // it returns a result so double decleration is needed.
{
	
double num;
int counter=0,n;

n=y;

while(y>0)
{
	y=y/10;
	counter++;
}
num=(double)x+n/pow(10,counter);

return(num);

}
