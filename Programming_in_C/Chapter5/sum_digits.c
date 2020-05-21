/*Write a program that calculates the sum of the digits of an integer.
For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
The program should accept any arbitrary integer typed in by the user.*/
#include<stdio.h>

int main(void)
{
    int n, remainder,sum;

    printf("Enter the number:");
    scanf("%i",&n);

    sum=0;

    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;

    }

    printf("\The sum of the digits is %i\n",sum);

    return 0;

}
