#include<stdio.h>

int main(void)
{

    int n,number,triangularNumber,counter ;

    for(counter=1;counter<=5; counter++)
    {
        printf("What triangular number do you want ?\n");
        scanf("%i",&number);

        triangularNumber=0;

        for(n=1;n<=number;n++)
            triangularNumber+=n;

        printf("triangular number %i is %i\n\n",number,triangularNumber);

    }
    return 0;

}
