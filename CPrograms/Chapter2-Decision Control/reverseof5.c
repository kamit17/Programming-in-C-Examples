/*
A five-digit number is entered through the keyboard. Write a program to obtain the 
reversed number and to determine whether the original and reversed numbers are 
equal or not.*/
/*this program will reverse the five digit number*/ 
#include<stdio.h> 
int main() 
{ 
int no,b,c,d,e,rev; /*no is the number entered by user,rev is the reverse number 
						which will be displayed at the end*/ 
						
printf("enter a five digit no.\n"); 
scanf("%d",&no); 
if(no<=99999 && no>=10000)        /*this if statement is to make sure that 
									user enters a five digit number 
                                    otherwise the program will display
                                     "you have not entered a five digit number"*/ 
{ 
  b=no/10;      /*int  is used so number after decimal will be neglected*/ 
  c=b/10; 
  d=c/10; 
  e=d/10; 
  rev=(no-10*b)*10000;      /*this formula will calculate unit digit of number entered by
  								 user and multiply by 10000 
                              in this way it will become first digit of reverse number*/   
  rev=rev+((b-10*c)*1000); /*this formula will calculate the tens digit of
  							number entered by user and multiply by 1000 
                             the resultant will be added to previous calculated no.
                             i.e rev so first two digits are 
                             reversed.in the similar way all digits will be reversed*/ 
  rev=rev+((c-10*d)*100); 
  rev=rev+((d-10*e)*10); 
  rev=rev+e; 
  printf("%d\n",rev); 
} 
else          /*this else is with the first if statement*/ 
printf("you have not entered a five digit no.\n"); 
return 0; 
}