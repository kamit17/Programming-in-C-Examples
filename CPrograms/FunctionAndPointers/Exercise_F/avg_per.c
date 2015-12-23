/*Write a function that receives marks received by a student in 3 subjects and
returns the average and percentage of these marks. Call this function from
main( ) and print the results in main( ).*/

#include<stdio.h>
float avg_per(float*, float*);
int main()
{
  float avg,per;
  printf("Enter the marks in three subject");
  avg_per(&avg,&per);
  printf("Avergae= %f\n percentage=%f\n",avg,per);
}
float avg_per(float*avg,float*per)
{
  float m1,m2,m3,sum,total;
  scanf("%f%f%f",&m1,&m2,&m3);
  total=300;
  sum=m1+m2+m3;
*avg=sum/3;
//*per=(sum*100)/total;
*per=(*avg/total)*100;
return(*avg,*per);
}
