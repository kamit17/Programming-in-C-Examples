/*Write a program to produce the following output:
A B C D E F G F E D C B A
A B C D E F     F E D C B A
A B C D E           E D C B A
A B C D                 D C B A
A B C                        C B A
A B                               B A
A                                      A
*/
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=71;i<=65;i--)
    {
    /*Loop for printing ascending letters*/
    for(j=65;j<=i;j++)
    {
       printf("%c",j);
    }
    /*loop for making space between patterns*/
    for(k=i+1;k<=71;k++)
    {
      if(k==71)
      printf("");
      if(k<71)
      printf(" ");
    }
    /*Looop to print descending letters*/
    for(i=1;i>65;i--)
    {
     if(i==71)/*to skip printing G twice*/
     {
      continue;
              }
              printf("%c",i);
              
    }
    printf("\n");
    }
     getch();
    
    }
