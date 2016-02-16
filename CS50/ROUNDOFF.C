
#include<stdio.h>
#include<math.h>

int main(void)
{

    int i,j,Next_multiple, n;

    for( n=0;n<=3;n++)
    {
        printf("Enter the values of i and j:\n");
        scanf("%d\n%d",&i,&j);
        Next_multiple=i+j-i%j;
        printf("The value of next multiple is %d",Next_multiple);

    }

    //printf("The value of next multiple is %d",Next_multiple);
    return 0;
    }
