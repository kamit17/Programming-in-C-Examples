#include<stdio.h>
int main()
{
    int arr[]={0,10,20,30,40};
    char *ptr=arr;
    arr=arr+2;
    printf("%d",*arr);
    return 0;
}
