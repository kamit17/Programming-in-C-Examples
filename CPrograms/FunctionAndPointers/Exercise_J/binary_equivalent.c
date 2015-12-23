/*A positive integer is entered through the keyboard, write a 
function to find the binary equivalent of this number using 
recursion.*/

#include<stdio.h>
void binary(long a)
{
	if(a) 
 /* 
Since in each recursive call, we divide the number fed to the function by 2 (binaryEquiRec(a / 2);),
this if condition guarantees that the function would return in case 'a' becomes zero, which would mean 'a / 2 = 0',
which is rue iff 'a' is zero. I keep dividing the number by 2 in each call because since we use the statement, int num = a % 2; 
to set 'num' as 'a % 2', it means we should reject the current 2's multiple from the number to keep on going with our calculation 
(the current multiple has already contributed)./
*/

	{
		int num=a%2;
		binary(a/2);
		printf("%d",num);
		
/*
 This statement is used to print the binary equivalent digit by digit. I have called this after the recursive call 
to get the number in correct order, else I would get the reverse of the binary equivalent. So what happens is that, 
as soon as the if condition fails, the last function call returns, that means the MSD of the binary equivalent is 
returned, which must be published as the leading bit.
 */
 
	}
}
int main()
{
	long no;
	printf("\n Enter a Number: ");
	scanf("%d",&no);
	printf("\n Binary Equivalent of %ld is :",no);
	binary(no);
	return 0; 
}
