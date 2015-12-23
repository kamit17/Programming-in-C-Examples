/*Any year is entered through the keyboard, write a program to determine whether the year
 is leap or not. Use the logical operators && and ||.*/
 /*If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days).*/

#include<stdio.h>
int main()
{
int year;
printf("enter the year \n");
scanf("%d", & year);
if((year%4==0 && year%100!=0)||year%400==0)
{
printf("the year %d is a leap year \n",year);
}
else
{
printf("the year %d  is not a leap year \n ",year);
}
}