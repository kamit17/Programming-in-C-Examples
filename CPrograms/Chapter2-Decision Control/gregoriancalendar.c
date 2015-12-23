/*According to the Gregorian calendar,it was Monday on the date 01/01/1900.If any year is input through the keyboard
 write a program to find out what is the day on 1st January of this year*/


/*The following is an idea that was proposed for the solution:

Assuming that you are not expected to come up with any date earlier than the one given.
Your calculations can be fairly simple.

* Calculate the number of days between your start date and the requested date
* Find the remainder when you divide by seven
* That will give you the day of the week, where monday == 0, tuesday == 1,..., Sunday == 6.

So the crux of the problem is in step 1
Break this down into three parts

* How many whole years between the start and and end dates
* How many whole months between the start and end months
* How many day between the start and end days

Again the only tricky part is in the first step.
Each year has 365 days so multiple the number by 365. Then think about the number
of leap years, a leap year occurs every four years, so divide the number of years that you have by four.

*/

#include <stdio.h>

int main(void)          //main function.. starting of c code
{
    int year,differ,lp_year,day_type;
    long int days;
   
    
    printf("Please enter the year: ");
    scanf("%d",&year);
    year=year-1; //we will find days before given year so 
    differ=year-1900;


   /*as leap year is not divisible by 100.so,create 2 condition
   one difference less than 100 and greater than 100*/

   if(differ<100)
   {
   lp_year=differ/4; //caln of total no. of leap year
   days=(366*lp_year)+((differ-lp_year)*365+365+1);//see Note1
   day_type=days%7; //caln of day type sun, mon......
   }
   
   if(differ>=100)
   {
   lp_year=(differ/4)-(differ/100)+1+((year-2000)/400);//see Note2            
   days=(366*lp_year)+((differ-lp_year)*365+365+1);//see Note3
   day_type=days%7;
   }

if(day_type==0)
printf("\nSunday");
if(day_type==1)
printf("Monday");
if(day_type==2)
printf("Tuesday");
if(day_type==3)
printf("Wednesday");
if(day_type==4)
printf("Thursday");
if(day_type==5)
printf("Friday");
if(day_type==6)
printf("Saturday");
     
     
   
    
    return 0;  //int main() is function so value must be return.
               //u will read in function chapter
}


/*Note1: 
-leap year has 366 day so lp_year*366
-remaining year has 365 day so (differ-lp_year)*365
-add 365 because we reduce 1 year
-add 1 to make jan 1 on which we find day type
      
Note2:
-(leap year come in every 4 year so) (differ/4) for leap year
-(leap year isn't divisible by 100 so we subtract (differ/100)
  from counting as leap year
-(leap year will be if divisible by 400 so ((year-2000)/400)
  to count that year as leap year
- we calculate from 2000 so we add 1

Note3:
-leap year has 366 day so lp_year*366
-remaining year has 365 day so (differ-lp_year)*365
-add 365 because we reduce 1 year
-add 1 to make jan 1 on which we find day type */