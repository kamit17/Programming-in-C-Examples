/*Find the absolute value of a number entered through the keyboard.*/
#include<stdio.h>
int main()
{
int N;
printf("enter the value of the number");
scanf("%d",&N);
if(N>=0)
printf("\n the absoulte value of N is %d \n", N);
else
printf("\n the absloute value of N is %d \n",-N );

}