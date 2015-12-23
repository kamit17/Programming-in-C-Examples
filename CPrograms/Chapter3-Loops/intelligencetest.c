/*According to a study, the approximate level of intelligence of a person can be 
calculated using the following formula:
i = 2 + ( y + 0.5 x )
Write a program, which will produce a table of values of i, y and x, where y 
varies  from 1 to 6, and, for each value of y, x varies from 5.5 to 12.5 in 
steps of 0.5*/
#include<stdio.h>
int main()
{
float i,x; 
int j;
for(j=1;j<=6;j++)
{
for(x=5.5;x<=12.5;x+=0.5) //x=x+0.5;
{
i=2+(j+0.5*x);

printf("%f %d %f \n",i, j, x);
continue;
}

}
getch();
return 0;
}
