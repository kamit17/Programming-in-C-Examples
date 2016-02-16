#include<stdio.h>
int main(void)
{

    int n, traingularNumber;

    traingularNumber=0;

    for(n=1;n<=200;n++)
        traingularNumber=traingularNumber+n;

    printf("The 200th traingularNumber is : %i\n",traingularNumber);

    return 0;
}
