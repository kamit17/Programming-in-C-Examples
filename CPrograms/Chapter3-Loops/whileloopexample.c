/* While loop Examples  -- Calculation of Si for 3 sets of P,n,r*/

#include<stdio.h>
int main()
{
int p, n, count=1;
float r,si;
while(count<=3)
{
printf("\n Enter the value of p,n and r");
scanf("%d%d%f", &p,&n,&r);
si=p*n*r/100;
printf("\n Simple interest =Rs %f\n",si);
count=count+1;
}
}
