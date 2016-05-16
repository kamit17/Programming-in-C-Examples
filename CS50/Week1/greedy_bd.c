#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
	int c = 1;
	int n = 5;
	int d = 10;
	int q = 25;
	int x = 0;
	float change;
	do
	{
		printf("How much change do I owe you?");
		change = GetFloat();
	}
	while (change < 0 );
	
	int dollar = roundf(change * 100 );
	
	while (dollar >= q)
	{
		dollar = dollar - q;
		x++;
	}
	while (dollar >= d)
	{
		dollar = dollar - d;
		x++;
	}
	while (dollar >= n)
	{
		dollar = dollar - n;
		x++;
	}
	while (dollar >= c)
	{
		dollar = dollar - c;
		x++;
	}
	
	printf("-%d\n" , x);
}