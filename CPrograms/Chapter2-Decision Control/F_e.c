/*
A library charges a fine for every book returned late. For first 5 days the fine is 50 
paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return 
the book after 30 days your membership will be cancelled. Write a program to accept the 
number of days the member is late to return the book and display the fine or the 
appropriate message.
*/

#include<stdio.h>
int main()
{
int d;
float fine;

printf("enter how late the book is returned\n");
scanf("%d", &d );
if(d<=30)
{
if(d<=5)
fine=0.50;
/*printf("the fine is %f  \n",fine);*/
else if(d>5 && d<=10)
fine=1.00 ;
/*printf("the fine is %f  \n",fine);*/
else if(d>10 && d<30)
fine=5.00 ;
printf("the fine is  Rs %f   \n",fine);
}
else 
printf("Membership cancelled");
}


/*
#include<stdio.h>
int main()
{
      int n;
      printf("\nEnter No. of Days : ");
      scanf("%d",&n);
      if(n<=5)
            printf("\nYour Fine is 0.50 Paise");
      else if(n>5 && n<=10)
            printf("\nYour Fine is Re. 1");
      else if(n>10 && n<=30)
            printf("\nYour Fine is Rs. 5");
      else
            printf("\nYour Membership is Cancelled"); 
}
*/