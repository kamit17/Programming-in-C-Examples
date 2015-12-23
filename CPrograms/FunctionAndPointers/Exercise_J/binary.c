#include<stdio.h>
#include math.h (include arrows)
void main()
{
int a,b;
printf("\nInput a number to find its binary equivalent");
scanf("%d",&a);
b=bina(a);
printf("\nThe binary equivalent of %d is %d",a,b);
}

bina(int x)
{
int a,b,c,d;

for(d=0;x>0;x-=c)
{

for(a=2,b=0,c=0;x>=c;b++)
{
if(x==0)
return(0);



c=pow(a,b);
}

b=b-2;
c=pow(a,b);
d=d+pow(10,b);
}

return(d);
}