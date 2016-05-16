#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
	int cent = 1;
	int nickel = 5;
	int dime = 10;
	int quarter = 25;
	int count = 0;
	float change_owed;
	do
	{
		printf("How much change do I owe you?");
		change_owed = GetFloat();
	}
	while (change_owed < 0 );
	
	int dollar = roundf(change_owed * 100 );
	
	while (dollar >= quarter)
	{
		dollar = dollar - quarter;
		count++;
	}
	while (dollar >= dime)
	{
		dollar = dollar - dime;
		count++;
	}
	while (dollar >= nickel)
	{
		dollar = dollar - nickel;
		count++;
	}
	while (dollar >= cent)
	{
		dollar = dollar - cent;
		count++;
	}
	
	printf("%i\n" , count);
}
