#include<cs50.h>
#include <stdio.h>

int GetPositiveInt();
int main(void)
{
    int a = GetPositiveInt();
    printf("Thanks for the %i!\n",a);
}


int GetPositiveInt(void)
{
    int a;
    do
    {
        printf("please give me a postive int: ");
        a = GetInt();
    }
    while(a<1);

    return a;
}
