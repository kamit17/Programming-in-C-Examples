/*Write a program to copy the contents of one array into another in the reverse order.*/

#include<stdio.h>
int main()
{
	int a[10],b[10],i,j;
	printf("Enter the array elements :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=9;i<10;i++,j--)
	{
		b[j]=a[i];
	}
	printf("The original array is :");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n The New Array is :" );
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
}
	
