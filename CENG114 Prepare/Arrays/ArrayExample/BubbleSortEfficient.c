#include <stdio.h>
#include <math.h>
int main(void)
{
	int array[6]={7,9,5,6,13,2};
	int i,j;
	int temp;
	int flag;
	
	/*
	i=0 -> j; 1<0-- 2<1-- 3<2-- 4<3-- 5<4
	i=1 -> j; 1<0-- 2<1-- 3<2-- 4<3
	i=2 -> j; 1<0-- 2<1-- 3<2
	i=3 -> j; 1<0-- 2<1
	i=4 -> j; 1<0
	this is the worst scenario that might happen after that flag will be 0 and it will exit the loop
	of course before i=4 it can be sorted and exit the loop therefore we use break statements.
	*/
	
	for(i=0;i<6;i++) 
	{
		flag=0;
		for(j=0;j<5-i;j++)
		{
			if(array[j+1]<array[j]) 
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	
	for(i=0;i<6;i++)
	{
		printf("%d ",array[i]);
	}
	
	
}
/*

69. Write a program in C to find out the maximum difference between any two elements such that larger element appears after the smaller number. Go to the editor
Expected Output :
The given array is : 7 9 5 6 13 2
The elements which provide maximum difference is: 5, 13
The Maximum difference between two elements in the array is: 8

*/