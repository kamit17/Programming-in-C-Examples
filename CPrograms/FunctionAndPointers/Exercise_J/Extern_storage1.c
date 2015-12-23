/*External Storage class Example*/
#include<stdio.h>
/*function declaration*/
void func(void);

static int count =5; //global variable

int main()
{

    while(count--)
    {
        func();
    }
    return 0;
}
/*Function definition*/
void func(void)
{

    static int i=5; /*local static Variable*/
    i++;
    printf("\n   i is is %d and count is %d\n",i,count);
}
