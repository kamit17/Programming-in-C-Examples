#include<stdio.h>
int  main()
{
int d,e,f;
printf("\nInput 3 digits to circular shift it(x,y,z)");
scanf("%d%d%d",&d,&e,&f);
circs(&d,&e,&f);
printf("\The shifted values are x=%d, y=%d, z=%d",d,e,f);
}

circs(int *x, int *y, int *z)
{
int a,b,c;
a=*z;
b=*x;
c=*y;
*x=a;
*y=b;
*z=c;
}