#include<stdio.h>
int main()
{
        int i=3,*x;
        float j=1.5,*y;
        char k='c',*z;

        printf("\n Value of i=%d",i);
        printf("\n Value of j=%f",j);
        printf("\n Value of k=%c",k);
        x=&i;
        y=&j;
        z=&k;
        printf("\n Original Address in x=%u",x);
        printf("\n Original address in y=%u",y);
        printf("\n Original address in z=%u",z);
        x++;
        y++;
        z++;
        printf("\nNew address in x=%u",x);
        printf("\nNew address in y=%u",y);
        printf("\nNew address in z=%u",z);
}
