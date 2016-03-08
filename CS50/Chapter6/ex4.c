/************************************************************************
Program to print  a simpe printing calculator

*************************************************************************/
#include <stdio.h>

int main(void)
{
    char operator;

    float acc= 0, num;

    printf(" Begin operations\n");

    while(operator != 'E')
    {

        scanf("%f %c",&num , &operator);

        switch(operator)
        {
        case '+':
            acc +=num;
            printf(" =%f\n",acc);
            break;

        case '-' :
            acc -=num;
            printf("=%f\n",acc);
            break;

        case '*' :
            acc *=num;
            printf("=%f\n",acc);
            break;

        case '/' :
            if(num == 0)
                printf("Divsion by zero\n");
            else
                acc /=num;
            printf("=%f\n",acc);
            break;

        case 'S' :
            acc =num;
            printf("=%f\n",acc);
            break;

        case 'E' :
            printf("=%f\n",acc);
            break;

        default :
            printf("Unknown operator\n");
            break;

        }
    }
    printf("End of Calculations\n");

    return 0;
}
