/*Write a program to find the octal equivalent of the entered number.*/

/*******************Logic Behind this***************************************************
Divide the decimal number by the desired target radix (2, 8, or 16).
Append the remainder as the next most significant digit.
Repeat until the decimal number has reached zero.
**************************************************************************************/
#include<stdio.h>

int main() {

long num,n;


printf("Please enter the number:  ");
scanf("%ld",&num);
printf("\n\nOctal equivalent:  ");

while(num!=0) {

n=num%8;

printf("%ld",n);

num=num/8;        /* devision by 8 */

}


printf("<%c%c%c%c%c read from right to left",196,196,196,196,196);


}
