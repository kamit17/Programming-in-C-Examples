#include<stdio.h>
int fact(int);
int main()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	printf("Factorial of %d is: %d",x,fact(x));
}
int fact(int i)
{
	if(i<=1)
	{
		return 1;
	}
	else
	{
		return i*fact(i-1); //the function fact is being called here again.
	}
}
