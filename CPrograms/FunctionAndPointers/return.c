#include<stdio.h>
int add(int , int );
int main()
{
	int a,b;
	int result;
	printf("enter two numbers:");
	scanf("%d%d", &a, &b);
	result = add(a,b);
	printf("\n The result of addition is  : %d", result);
	
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

