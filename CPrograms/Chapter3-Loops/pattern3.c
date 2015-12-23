
/*Write a program to print th following pattern*/

/*
    *
   **
  ***
 ****
*****    */

#include<stdio.h>
int main()
{
    int noOfRows,row,col1,col2,noOfCols; 
    // noOfrows=the no of rows
    noOfRows=5;
    noOfCols=noOfRows-1;
    
    for(row=1;row<=noOfRows;row++)
    {
         for(col1=1;col1<=noOfCols;col1++)
         {
         printf(" ");
         }   noOfCols--;
         for(col2=1;col2<=row;col2++)
         {
         printf("*");
         }
         printf("\n");
           }
          getch();
    
    }
