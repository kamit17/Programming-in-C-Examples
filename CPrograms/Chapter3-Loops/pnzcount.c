/*Write a program to enter the numbers till the user wants and at the end it should 
display the count of positive, negative and zeros entered.*/

#include<stdio.h>
int main()
{
int num,x,p=0,n=0,z=0; 
/*num=number entered, x=total numbers user wants to enter,p=positive,n=negative,z=zeros*/

printf("how many numbers do you want to enter");
scanf("%d",&x);
while(x>0)
{
scanf("%d", &num);
if(num>0)
p++;
else if(num<0)
n++;
else if(num==0)
z++;
x--;
}
printf("\n you entered : \n %d positive Numbers\n%d negative numebrs\n%d Zeros",p,n,z);

}



