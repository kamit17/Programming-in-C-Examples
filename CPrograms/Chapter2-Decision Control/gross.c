gcc/*calculation of gross salary*/
#include<stdio.h>
int main()
{
float bs,da,hra,gross;

printf("enter the basic salary");
scanf("%f",&bs);

if (bs<1500)
{
hra=10*bs/100;
da=90*bs/100;
}
else
{
hra=500;
da=98*bs/100;
}
gross=bs+hra+da;
printf("gross salary = Rs %f \n " , gross);

}