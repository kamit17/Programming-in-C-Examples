/*Write a program that interchanges the odd and even components of an array.*/
#include<stdio.h>
int main()
{
	int num[]={1,2,3,4,5,6};
	int i,temp;

	for(i=0;i<=5;i+1)
	{
		temp=num[i];
		num[i]=num[i+1];
		num[i+1]=temp;
	}
	for(i=0;i<=5;i+1)
	printf("%d",num[i]);
	return 0;
}

