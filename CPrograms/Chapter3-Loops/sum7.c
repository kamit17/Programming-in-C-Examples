/*Write a program to add first seven terms of the following series using a for loop:
        1/1!+2/2!+3/3!+.......
*/
#include<stdio.h>
int main()
{
    int i,fact=1;
    float sum=0;
   
    printf("Enter the number of terms");
    scanf("%d",&i);
    for(i=1;i<=7;i++)
    {
       fact=fact*i;
      //( i=n/fact;
       sum=sum+(i*1.00/fact);
       
       }
       printf("the sum of the given series is  %f",sum);
       getch();
    }
