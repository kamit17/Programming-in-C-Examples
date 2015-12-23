/* program to swap two values by using call by value*/
#include<stdio.h>
void swap( int, int);
int main()
{
	int a,b;
	a=10,b=5;
	printf("Before swapping: %d %d\n",a,b);
	swap(a,b);
	printf("Afer swapping: %d %d",a,b);
	
}
void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
