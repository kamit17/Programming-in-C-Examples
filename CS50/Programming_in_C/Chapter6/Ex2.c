
#include<stdio.h>

int main(void)
{

    int num1 ,num2 ,divison;

    printf("Enter the values of number1 and number 2 \n");
    scanf("%i\n %i",&num1,&num2);

    divison=num1 % num2;

    if( divison == 0 )
        printf("numbers are evenly divisible\n");

    else
        printf("Numbers are not evenly divisible\n");

    return 0;

}
