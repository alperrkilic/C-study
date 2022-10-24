#include <stdio.h>
char findSign(int x);
int main(){
	
/* write a function that receives an integer parameter, returns 'n' if it is negative returns 'p' if it is positive */	

char ch=findSign(-7);	
	
}

char findSign(int x)
{
	
	if(x<0)
		return('n'); // either this return('n') or return('p') will be executed not both of them.
	else
		return('p');	
	
	/*
		char result;
		if(x<0)
			result='n';
		else
			result='p';
		
		return (result);		
	*/
	
}
