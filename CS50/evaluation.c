#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,expression;

    a = (3.31*pow(10 , -8))*(2.01*pow(10,-7));
    b= (7.16*pow(10,-6))+(2.01*pow(10,-8));

    expression =a/b;

    printf("The value of the expression is %g\n",expression);

    return 0;
}
