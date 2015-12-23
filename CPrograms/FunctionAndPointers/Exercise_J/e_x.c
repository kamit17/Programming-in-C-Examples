#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double expo(double x);

int main()
{
    double y, myexp,ratio;

    for (y=0.0;y<2.0;y=y+0.1)
    {
        myexp = expo(y);
        ratio = myexp/exp(y);
        printf("%8.2f  %20.10f  %20.10f\n",y,myexp,ratio);
    }
    return 0;
}
double expo(double x)
{
    double term,result;
    int n;
    term=1.0;
    result=1.0;
    for (n=2;n<20;n=n+1)
    {
        term =term * x/(n-1);
        if(term/result<1e-1)break;
        result=result + term;
    }
    printf("%4d",n);
    return result; }
