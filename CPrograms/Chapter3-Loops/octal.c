/*Write a program to find the octal equivalent of the entered number.*/

/*******************Logic Behind this***************************************************
Divide the decimal number by the desired target radix (2, 8, or 16).
Append the remainder as the next most significant digit.
Repeat until the decimal number has reached zero.



Decimal to octal conversion method:

Step 1: Divide the original decimal number by 8
Step 2: Divide the quotient by 8
Step3: Repeat the step 2 until we get quotient equal to zero.

Result octal number would be remainders of each step in the reverse order.

Decimal to octal conversion with example:

For example we want to convert decimal number 525 in the octal.

Step 1:  525 / 8  Remainder : 5 , Quotient : 65
Step 2:   65 / 8  Remainder : 1 , Quotient : 8
Step 3:    8 / 8  Remainder : 0 , Quotient : 1
Step 4:    1 / 8  Remainder : 1 , Quotient : 0

So equivalent octal number is: 1015
That is (525)10 = (1015)8
**************************************************************************************/
#include<stdio.h>
#include<conio.h>
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


#include<stdio.h>
int main()
{
int rem,num,total=0,i=1;
printf("enter the number");
scanf("%d", &num);

while(num!=0)
rem=num%8;
{
total=total+rem*i;
i=i*10;
num=num/8;
}
printf("the octal equivalent is %d",total);
}