#include<stdio.h>
int main()
{
    int noOfRows;
    printf("Enter the number of rows");
    scanf("%d",&noOfRows);
    int colspace,colstar,row;
    for(row=1;row<=noOfRows;row++)
    {
    for(colspace=noOfRows-row;colspace>=1;colspace--)
    {
    printf(" ");
    }
    for(colstar=1;colstar<=row;colstar++)
    {
     printf("* ");
    }
    printf("\n");
    
    }
    


    getch();
    
    }
