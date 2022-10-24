#include <stdio.h>
int main(void)
{
	int i,j,n,counter=0,k;
	int array1[100];
	
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	printf("Input the %d elements in the array: \n");
	
	for(i=0;i<n;i++) /*Getting elements of the array */
	{
		printf("Element - %d: ",i);
		scanf("%d",&array1[i]);
		printf("\n");
	}
	
	printf("The unique elements found in the array are: ");
	
	k=n;
	
	for(i=0;i<n;i++) /*i starts with 0 ends when it reaches to the 4 when entered number is 5 (counts 5 elements starting from 0 (0,1,2,3,4) */
	{
		counter=0;
		
		for(j=0;j<k+1;j++) /* For example number entered is 5 starts with j=0,  ends when j<6 */
		{
			if(i!=j) /*if i is not equal to j*/
			{
				if(array1[i]==array1[j]) /*if i'th element of the array1 is equal to j'th element of the array1 increase counter by one. */
				{
					counter++;
				}
			}
		}
		if(counter==0) /* if counter is not increased that means i'th element is not equal to the j'th element therefore it is unique. */
		{
			printf("%d ",array1[i]);
		}	
	}
	
	return 0;
		
}