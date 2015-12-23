#include<stdio.h>
int main()
{
    float a=2.0f,b=1.0f,c=0.2f;
    float *arr[]={&a,&b,&c};
    b=a+c;
    printf("%f",arr[2]);
    return 0;

}
