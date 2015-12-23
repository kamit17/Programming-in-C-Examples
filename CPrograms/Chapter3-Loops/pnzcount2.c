/*Another Method*/

#include<stdio.h>
int main()
{
int n,num,p=0,neg=0,z=0,i;
printf("Enter how many numbers you want to enter\n");
scanf("%d",&n);
printf("Enter %d numbers\n",n);
i=1;
while(i<=n)
{
scanf("%d",&num);
if(num>0)
p=p+1;
if(num<0)
neg=neg+1;
if(num==0)
z=z+1;
i++;
}
printf("Postive numbers=%d\nNegative Numbers=%d\nZeros=%d\n",p,neg,z);
return 0;
}