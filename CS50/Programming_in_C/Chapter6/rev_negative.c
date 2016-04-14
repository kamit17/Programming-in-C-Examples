/*

Algorithm:
Input : num
    initialize rev_num = 0
    while num > 0
        mulitply rev_num by 10 and add remainder of num
            divide by 10 to rev_num
                rev_num = rev_num*10 + num %10;
        divivde num by 10
    return rev_num
finish


*/
#include<stdio.h>
#include<stdbool.h>

int main(void)


{
    int number, right_digit;
    bool flag;

    flag = false;

    printf("Enter your number: ");
    scanf("%i",&number);

    if(number < 0)
    {
        flag =true;
        number = -number;
        //printf("Number: %i",number);
    }
    do
    {
        right_digit=number % 10;
        printf("%i",right_digit);
        number /=10;
    }
    while ( number !=0);
    //printf("\n");

    if(flag == true)
    {
        printf("-");
    }
    printf("\n");
    return 0;

}


