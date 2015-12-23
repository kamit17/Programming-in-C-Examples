/*PatternPrinting1*/
#include<stdio.h>
int main()
{
    char print='*';
    int rows,cols,noofrows;
    printf("enter the no of rows you want");
    scanf("%d",& noofrows);
    for(rows=1;rows<=noofrows;rows--) // for printing the rows
    {
       for(cols=1;cols<=rows;cols++) // for printing * multiple times
       {
        printf("%c",print);
        }
        printf("\n");
        
     }
     getch();
    }
