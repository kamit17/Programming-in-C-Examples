#include<stdio.h>
int main()
{
    int noOfRows,row,col;
    noOfRows=5;
    
    for(row=1;row<=noOfRows;row++)
    {
                                  
      for(col=1;col<=row;col++)
      {
         printf("%d ",row*col);
         }
         printf("\n");
         
    }
    getch();
    }
