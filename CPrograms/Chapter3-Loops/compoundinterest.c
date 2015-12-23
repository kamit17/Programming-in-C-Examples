/*  When interest compounds q times per year at an annual rate of r % for n years, the
 principle p compounds to an amount a as per the following formula 
a = p ( 1 + r / q ) ^ nq
Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.*/

#include<stdio.h>
int main()
{

int p,r,n,q,a,i,j,product;
float amt=1;
for(i=0;i<10;i++) 
{ 
amt=1; 
printf("enter the values of p,r,n and q: "); 
scanf("%d%d%d%d",&p,&r,&n,&q); 
product=n*q; 
for(j=1;j<=product;j++) 
{ 
amt = amt * ( 1 +(float) r / q ); 
} 
amt= p *amt; 
printf("%f",amt); 
} 
} 