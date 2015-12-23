/*Two numbers are entered through the keyboard. Write a program to find the value of 
one number raised to the power of another.*/

#include<stdio.h>
int main()
{
int num1,num2,i,rslt=1;
printf("enter the tow numbers :\n");
scanf("%d%d", &num1 ,&num2);
for(i=1;i<=num2;i++)
{
rslt=rslt*num1;
if(i==num2)
{
break;
}
}
printf("the value of %d raised to the power of %d is = %d \n", num1,num2,rslt);
}



/*
/* using while statement 
#include<stdio.h>
int main()
{
int a,b,n1,n2,res=1; /*n1=a=1st number,n2=b=2nd number ,res= result 
printf("enter any two numbers\n");
scanf("%d %d",&n1,&n2);
while(n2>0)
{
res=res*n1;
n2--;
}
printf("\n %d raised to the power %d is %d \n", n1,n2,res);
}

*/