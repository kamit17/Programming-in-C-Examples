#include<cs50.h>
#include <stdio.h>

int GetPositiveInt();
int main(void)
{
    int n = GetPositiveInt();
    printf("Thanks for the %i!\n",n);
}


int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("please give me a postive int: ");
        n = GetInt();
    }
    while(n<1);

    return n;
}
