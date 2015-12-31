/************************************************************************************************************************* 
 Write a C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using calloc() function.
 *************************************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr,sum=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Error! memory not allocated:");
		exit(0);
	}
	printf("Enter elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("\n sum=%d\n",sum);
	free(ptr);
	return 0;
}
