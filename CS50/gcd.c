/*Program to find the greatest common divisor of two non-negative number*/

#include<stdio.h>

int main(void)
{

    int u, v, temp;

    printf("Enter the values of v and u\n");
    scanf("%i%i",&u,&v);

    while(v!=0)
    {
        temp=u%v;
        u=v;
        v=temp;
    }
    printf("Their greatest common divisor is %i\n",u);

    return 0;
}
