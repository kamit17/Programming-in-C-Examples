/*Write a function power ( a, b ), to calculate the value of a raised to b.*/
#include<stdio.h>
int power (int x, int y);
int main()
{
int a,b,pow;
printf("Enter the values of a and b");
scanf("%d%d",&a,&b);
pow=power(a,b);

printf("%d raised to %d is %d",a,b,pow);
}
 int power(int x, int y)
{
int i=1,result;
result=x;
for(i=1;i<y;i++)
{
result=result*x;
//continue;
}
return result;
}
