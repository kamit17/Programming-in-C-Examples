#include<stdio.h>
int main()
{
    int noOfRows=5;
    int row,col;
    for(row=1;row<=noOfRows;row++)
    {
    for(col=1;col<=row;col++)
    {
        // int remainder=col%2;
         printf("%d", col%2);
                            
    }
    printf("\n");
    
    }
    getch();
    }
