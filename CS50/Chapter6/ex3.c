#include<stdio.h>

int main()
{

    float integer1 , integer2, divison;

    printf("Enter the two integers\n");
    scanf("%i\n %i",& integer1, & integer2);

    divison = integer1 / integer2;

    if( integer2 == 0)
        printf("Division by zero\n");
    else
        printf("The result of the divison is %.3f\n",divison);

    return 0;
}
