/* Swap using call by reference*/
#include<stdio.h>
void swap(int *, int *);
int main()
{
	int a=10,b=20;
	printf("original values of a and b are %d and  %d\n",a,b);
	swap(&a,&b);
	printf("\n The new values of a and b are %d and %d\n",a,b);
}
void swap( int *x , int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
