/*Write a recursive function to obtain the running sum of first 25 natural numbers.*/
#include<stdio.h>
int recsum(int a)
{
	if(a<1)
		return a;
		else if(a==1)
		return 1;
		else
		return( a+recsum(a-1));
/*
return (a + recSumNat(a-1)); -> For any natural number other than 1, the function returns the sum of the current value of 'a' with the current call 
to the function, and the value returned by the function when called with 'a-1'. Thus, we are guaranteed to exit the recursive stack as soon as the value
 of 'a' reaches 1.
 f*/
		}
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	printf("\n Sum of Natural Numbers upto %d: is %d",number,recsum(number));
	return 0;
	
}
