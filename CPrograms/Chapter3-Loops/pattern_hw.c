#include<stdio.h>
//#include<conio.h>
int main()
{
 int no,row,col1,col2,nocol;
 no = 5;
 nocol = no;

 for(row = 1; row <= no ; row++){
    for(col1=1;col1<=nocol;col1++){
        printf("*");
    }
    nocol--;
    printf("\n");
    for(col2=1;col2<=row;col2++){
        printf(" ");
    }
 }
 getch();
 return 0;
}
