/*
A five-digit number is entered through the keyboard. Write a program to obtain the 
reversed number and to determine whether the original and reversed numbers are 
equal or not.*/
/*this program will reverse the five digit number*/ 
#include<stdio.h> 
int main() 
{ 
int a;
printf("enter a five digit no.\n"); 
scanf("%d",&a); 
int y=0;
if(a<=99999 && a>=10000)        /*this if statement is to make sure that 
									user enters a five digit number 
                                    otherwise the program will display
                                  "you have not entered a five digit number"*/ 
{ 
  {  
     y=y*10+a%10;  
     a=a/10;  
   }  
   printf("\nreverse= %d",y); 
} 
else          /*this else is with the first if statement*/ 
printf("you have not entered a five digit no.\n"); 
return 0; 
}