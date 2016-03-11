
/*Write a program to print th following pattern*/

/*
    *
   **
  ***
 ****
*****    */

/*The logic is that we need to have three loops. One for iterating through th column. One for iterating through the rows and printing  space and the third for iterating through the loops to print #*/

#include<stdio.h>
int main()
{
    int height=0,col,row1,row2,noofrows;
    // noOfrows=the no of rows
    //noOfRows=5;
    do{
    printf("Height: ");  //do while loop to get the height
    scanf("%i",&height);
    noofrows=height-1;   //for the gap
    }
    while(height >23 || height<=0);

    for(col = 2; col <= height ; col++)   //outerloop for the columns
    {
         for(row1 = 2; row1 <= noofrows ; row1++)
         {
         printf(" ");
         }
         noofrows--;
         for(row2 =1 ; row2 <= col; row2++)
         {
         printf("#");
         }
         printf("\n");
    }



}
