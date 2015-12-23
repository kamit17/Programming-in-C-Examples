#include<stdio.h>
void print_arr(int *a,int size);
int main()
{
	int arr[5]={1,2,3,4,5};
	print_arr(&arr,5);
}
void print_arr(int *a,int size)
{
	int i;
	printf("\n\n\t The contents of the array arr[5] .....");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t %d",*(a+i));
	}
}
