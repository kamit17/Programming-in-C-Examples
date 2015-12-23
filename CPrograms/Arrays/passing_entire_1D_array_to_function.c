/*Write a C program to pass an array containing age of person to a function.
This function should find average age and display the average age in main function*/

#include<stdio.h>
float average(float a[]);
int main()
{
  float avg,c[]={23.4,55,22.6,3,40.5,18};
  avg=average(c); /*Only name of array is passed as an argument*/
  printf("Average age = %.2f \n",avg);
  return 0;
}
float average(float a[])
{
  int i;
  float avg,sum=0.0;
  for(i=0;i<6;i++)
  {
    sum=sum+a[i];
    }
    avg=(sum/6);
    return avg;
}
