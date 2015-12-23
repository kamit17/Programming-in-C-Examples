/*Write a program to fill the entire screen with diamond and heart alternatively
. The ASCII value for heart is 3 and that of diamond is 4.*/

#include<stdio.h>
int main(){
int a,b,c,d;
for(c=1;c<=100;c++)
{
for(d=1;d<=100;d++)
{
     for(a=4;a<=4;a++)
     {for(b=3;b<=3;b++)
     printf("%c%c",a,b);
     }
     }
     }
     getch();
                  
}
