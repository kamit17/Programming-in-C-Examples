/* A Menu driven program*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,num,i;
unsigned long int fact=1;
while(1)
{
printf("\n 1.Factorial\n");
printf("\n 2. Prime\n");
printf("\n  3. Odd/Even \n");
printf("\n 4. Exit\n");
printf("\n  Enter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the Number");
scanf("%d",&num);
for(i=1;i<=num;i++)
fact=fact*i;
printf("\n Factorial value %lu",fact);
break; /* takes the control out of switch */

case 2:
printf("Enter the Number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
  if(num%i == 0)
  {
    printf("\n Not a prime Number");
    break; /*Takes control out of for loop*/
}
}
if(i==num)
printf("prime number");
break;

case 3:
printf("Enter the Number");
scanf("%d",&num);
if (num%2==0)
printf("\n Even Number ");
else
printf("\n Odd number");
break;
case 4:
exit(1);
}
}
}
