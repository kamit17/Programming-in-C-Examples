#include<stdio.h>
int fibo(int);
int main()
{
	int x;
	for(x=0;x<10;x++)
	{
		printf("%d\t",fibo(x));
	}
}
int fibo(int i)
{
	if(i==0)
	{
		return 0;
	}
	if(i==1)
	{
		return 1;
	}
	else return fibo(i-1)+fibo (i-2);
}
