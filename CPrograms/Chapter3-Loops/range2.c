/*Write a program to find the range of a set of numbers*/

#include<stdio.h>
int main()

{
int num,max=-32768,min=32767,range;
char choice='y';
while(choice=='y')
{
printf("enter any number");
scanf("%d",&num);
if(num>max)
max=num;
else if(num<min)
min=num;

printf("\n do you want to add another number:(y\n)?");
scanf("%c",&choice);
max++;
}
range=max-min;
printf("range is %d", range);

}


/*The program is not working properly*/