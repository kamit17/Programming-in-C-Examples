#include<stdio.h>

int main(void)
{
    int n, fact;
    //printf("Enter the value of n");
    printf("n       Factorial\n");
    printf("---     ------------\n");

    fact=1;
    for(n=1;n<=10;n++)
    {

        fact=n*fact;

        printf("%.2i         %i\n",n,fact);
    }
    return 0;
}
