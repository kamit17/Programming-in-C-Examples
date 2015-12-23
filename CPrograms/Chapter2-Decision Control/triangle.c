/* Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/
#include<stdio.h>
int main()
{
float a1,a2,a3,sum;
printf("Enter the angles of the traingle");
scanf("%f %f %f", &a1,&a2,&a2);
sum=a1+a2+a3;
if(sum==180)
printf("the traingle is a valid traingle");
else
printf("the triangle is not a valid one");
}