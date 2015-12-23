#include <stdio.h>
void intSwap(int *a,int *b);
void charSwap(char *a,char *b);
void (*swap)(void*,void*);
int main(int argc, char const *argv[])
{
    int a=20,b=15;
    char c='j',d='H';
    swap=&intSwap;// warning here
    swap(&a,&b);
    printf("%d %d\n",a,b);
    swap=&charSwap;// warning here also
    swap(&c,&d);
    printf("%c %c\n",c,d ); 
    return 0;
}


void intSwap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void charSwap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
