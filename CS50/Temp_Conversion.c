/* Write a program that converts 27 from Fahrenheit to Celcius using the formula:
C=(F-32)/1.8
*/

#include<stdio.h>

int main()
{
     int F;
     float C;
    printf("Enter the temperature in Fhareneit:\n");
    scanf("%d",&F);

    C= (F-32)/1.8;

    printf("The temperature in Celcius is %f  degree Celcius\n",C);

return 0;
}
