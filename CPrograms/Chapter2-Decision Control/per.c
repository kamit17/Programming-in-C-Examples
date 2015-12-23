/*calculating average using logical operators*/
#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,total;
float per;
printf("enter the marks in 5 subjects");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
per=total/5;
if(per>60)
{
printf("first class\n");}
else 
if((per<59 )&& (per>50))
printf("second class\n");
else
if((per<49 )&& (per>40))
printf("third class \n");
else
printf("fail \n");
printf("\n");
}
