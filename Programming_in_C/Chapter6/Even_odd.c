
/*Program to determine if a number is even or odd*/
#include<stdio.h>

int main(void)
{

    int number_to_test ,remainder;

    printf("Enter the number: ");
    scanf("%i",&number_to_test);

   // remainder=number_to_test % 2;

   remainder=number_to_test %2;

    if(remainder== 0)
        printf("Number is even.\n");

    else
        printf("The number is odd.\n");

    return 0;

}
