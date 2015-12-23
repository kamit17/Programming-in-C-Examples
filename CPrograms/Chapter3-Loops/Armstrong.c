/*(e) Write a program to print out all Armstrong numbers between 1 and 500. 
If sum of cubes of each digit of the number is equal to the number itself, then the 
number is called an Armstrong number. 
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )*/
/*
#include<stdio.h>
int main()
{
int n,n1,rem,num=0;
printf("enter a positive integer\n");
scanf("%d",&n);
n1=n;
while(n1!=0)
{
rem=n1%10;
num+=rem*rem*rem;
n1/=10;
}
if(num==n)
printf("%d is an Armstrong number:" ,n);
else
printf("not an Armstrong number");
}
*/

#include<stdio.h>
int main()
{
int originalinput; /* ASking a number from the user */
printf("Enter a number :\n");
scanf("%d",&originalinput); /*initialize the variable*/
int sum=0; /*intiialize the sum*/
int temp=originalinput; /*the original number,used coz we r continusally diving the 
							number by 10,to retain the original number.*/
while(temp!=0)
{
int unitsPlace=temp%10; /*(get the units place)*/
sum=sum+unitsPlace*unitsPlace*unitsPlace;
temp=temp/10;
}
if(sum==originalinput)
{
printf("%d is  an Armstrong number \n ",originalinput);
}
else 
printf("%d is not an Armstrong number \n ",originalinput);
}