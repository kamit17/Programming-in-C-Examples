/*
Write a program to generate and display a table of n and n^2, for integer values of n, ranging from 1 to 10.
Be certain to print appropriate column headings.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n=1, nsquare;

    printf("Table of N and NSquare\n\n");
    printf("n   Value of n square from 1 to 10\n");
    printf("---  --------------------------------\n");

    for(n=1;n<=10;n++)
    {
        nsquare=n*n;
        printf("%.2i         %i\n",n,nsquare);
    }

    return 0;
}
