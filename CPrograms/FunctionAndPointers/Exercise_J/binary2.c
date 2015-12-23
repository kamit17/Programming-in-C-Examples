#include<stdio.h>
#include<conio.h>
void main() {

int num;
void binary();

//clrscr();

printf("\t\tDecimal Integer to Binary conversion\n\n\n");
printf("Enter the number: ");
scanf("%d",&num);

printf("\n\n\nBinary equivalent:  ");

binary(num);

//gotoxy(20,10);
//printf("<%c%c%c%c%c",196,196,196,196,196);
//printf(" read right to left");

//getch();
}

void binary(int n) {

while(n!=0) {

printf("%d",n%2);

n=n/2;

}

}
