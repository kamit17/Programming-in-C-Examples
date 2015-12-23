#include<stdio.h>
int main()
{
	int arr[5]={15,20,25,30,25}; //decalartaion of interger array
	int *ptr;
	ptr=&arr; // pointer points to the first elemnet in the array.
	int i; //control variable for the for loop
	for(i=0;i<5;i++)
	{
		printf("Element %d: %d\n",(i+1),*ptr);
		ptr++;
	}
}
