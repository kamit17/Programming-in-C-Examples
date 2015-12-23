/*Salary of Male and Female*/
#include<stdio.h>
int main()
{
char g;
int yos,sal,qual;
printf("Enter Gender,Years of service,qualification(0=G,1=PG) \n");
scanf("%c %d %d",&g,&yos,&qual);

if(g=='M' &&yos>=10 &&qual == 1)
sal=15000;
else if((g=='M'&&yos>=10 &&qual==0)||(g=='M'&&yos<10 &&qual==1))
sal=10000;
else if(g=='M'&&yos<10 &&qual==0)
sal=7000;
else if(g=='F'&&yos>=10 &&qual==1)
sal=12000;
else if(g=='F'&&yos>=10 &&qual==0)
sal=9000;
else if(g=='F'&&yos<10 &&qual==1)
sal=10000;
else if(g=='F'&&yos<10 &&qual==0)
sal=9000;
printf("\n Salary of Employee =%d \n",sal);
}