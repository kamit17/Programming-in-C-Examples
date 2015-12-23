/*
Write a general-purpose function to convert any given year into its roman equivalent.
The following table shows the roman equivalents of decimal numbers:

Decimal:.........Roman
1................i
5................v
10...............x
50...............l
100..............c
500..............d
1000.............m

Example:
Roman equivalent of 1988 is mdcccclxxxviii
Roman equivalent of 1525 is mdxxv

  */


#include<stdio.h>
 int main()
{
    int year;
    int convert (int year);


    while (1)
    {

        printf("Note:Enter a four year digit year.\n\n");

        printf("Enter the year that you wanna convert to Roman: " );
        scanf ("%d", &year);

        if (year> 1999)
        {
            printf("Invalid Year.Please enter again.\n\n");
        }
    }

    convert(year);


}



 int convert(int year);
{

    int i;

    {
     i=(year/1000); //thousands place
    if(i==1)
     {
     printf("m");
     }


     i=(year%1000)-(year/1000); //hundreds place
     switch (i)
    {
    case 1:
    printf("c");
    break;

    case 2:
    printf("cc");
    break;

    case 3:
    printf("ccc");
    break;

    case 4:
    printf("cd");
    break;

    case 5:
    printf("d");
    break;

    case 6:
    printf("dc");
    break;

    case 7:
    printf("dcc");
    break;

    case 8:
    printf("dccc");
    break;

    case 9:
    printf("dcccc");
    break;

    }



    i=(year-((year/100)*100))/10; //tens place
    switch(i)
    {
    case 1:
    printf("x");
    break;

    case 2:
    printf("xx");
    break;

    case 3:
    printf("xxx");
    break;

     case 4:
    printf("xl");
    break;

    case 5:
    printf("x");
    break;

    case 6:
    printf("xl");
    break;

    case 7:
    printf("xll");
    break;

     case 8:
    printf("xlll");
    break;

    case 9:
    printf("xllll");
    break;

    }



    i=year%10; //ones place
     switch(i);
     {
     case 1:
     printf("i");
     break;

     case 2:
     printf("ii");
    break;

     case 3:
    printf("iii");
    break;

     case 4:
    printf("iv");
    break;

    case 5:
    printf("v");
    break;

     case 6:
    printf("vi");
    break;

    case 7:
    printf("vii");
    break;

    case 8:
    printf("viii");
    break;

     case 9:
    printf("ix");
    break;
     }
}

return 0;

}
