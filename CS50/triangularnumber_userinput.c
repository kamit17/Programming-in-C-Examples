
#include<stdio.h>
int main(void)
{

    int n,number,triangular_Number=0;

    printf("what number triangle do you want?\n");
    scanf("%d",&number);

    for(n=1;n<=number;n++)
    {


        triangular_Number+=n;
    }
        printf("\n Triangular number %i is %i\n",number,triangular_Number);

    return 0;


}

