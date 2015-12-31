/*
   Write a C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using malloc() function.
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int main()
{
	int i,n,sum=0,*ptr;
	printf("Enter the elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int)); /*memory allocation using malloc() */
	if(ptr== NULL)
	{
		printf("Error! memory not allocated\n");
		exit(0);
	}
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d\n",sum);
	free(ptr);
	return 0;
}

