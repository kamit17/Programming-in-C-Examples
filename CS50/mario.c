
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
    int height=0,row,col1,col2,noOfCols;
    // noOfrows=the no of rows
    //noOfRows=5;
    do{
    printf("Height: ");
    scanf("%i",&height);
    noOfCols=height-1;
    }
    while(height >23 || height<=0);

    for(row = 1; row<=height ; row++)
    {
         for(col1 = 1; col1 <= noOfCols ; col1++)
         {
         printf(" ");
         }
         noOfCols--;
         for(col2 =0; col2 <= row; col2++)
         {
         printf("#");
         }
         printf("\n");
    }



}
