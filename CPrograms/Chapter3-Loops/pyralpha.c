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
int a,x,n=71,o=70,y=1,c;
for(x=1;x<=7;x++)
{
    for(a=65;a<=n;a++) // loop for Printing ABCDEFG
    printf("%c",a);
    if(x==2)
    o=70;
    for(c=2;c<y;c++)//space loop
    printf("");
    for(a=o;a>65;a--) //loop for printing FEDCBA
    printf("%c",a);
    printf("\n"); //to sta
    n--;
    o--;
    y=y+2;
    
}
getch();
}
