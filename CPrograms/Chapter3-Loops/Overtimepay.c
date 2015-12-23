/*
Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate 
of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not
 work for fractional part of an hour.*/
 /*
 #include<stdio.h>
 int main()
 {
 int emp,ot,pay,hours;
 for(emp=1;emp<=10;emp++)
 {
 printf("enter the number of hours worked by %d employee: \n",emp);
 scanf("%d",&hours);
 if (hours>40)
 {
 ot=hours-40;
 pay=12*ot;
 printf("the overtime pay is %d \n",pay);
 }
 else if(hours<40)
 {
 printf("there is no overtime pay for employee\n");
 }
 }
 }
 */
 
 /*The same program using while loop*/
 
#include<stdio.h>
 int main()
 {
 int emp,ot,pay,hours;
 emp=1;
 while(emp<=10)
 {
 printf("enter the number of hours worked by %d employee: \n",emp);
 scanf("%d",&hours);
 if (hours>40)
 {
 ot=hours-40;
 pay=12*ot;
 printf("the overtime pay is %d \n",pay);
 }
 else if(hours<40)
 {
 printf("there is no overtime pay for employee\n");
 }
 }
 }