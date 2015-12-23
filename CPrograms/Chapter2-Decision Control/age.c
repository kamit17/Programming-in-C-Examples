/*If the ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/

#include<stdio.h>
int main()
{
int r,s,a,small;
printf("Enter the age of Ram,shyam and Ajay");
scanf("%d%d%d" ,&r,&s,&a);
if(r<s && r<a)
{printf("ram is youngest");
}
else if(s<a)
printf("shyam is youngest");

else
printf("ajay is youngest");
}