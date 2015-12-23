#include<stdio.h>
#include<stdlib.h>

//#include<conio.h>

int main()

{

int c;

int n, i, fact=1,r=0;

while(1)

{

printf("choose your option\n 1.factorial of a number\n 2.prime or not\n 3.odd or
 even\n 4.exit\n");

scanf("%d",&c);

switch(c)

{

case 1:

printf(" Enter any no: ");

scanf("%d", &n);

for( i = n; i >= 1; i-- )

{

fact = fact * i;

}

printf(" Factorial =%d\n",fact);

break;

case 2:

printf(" Enter any no: ");

scanf("%d",&n);

for( i = 2; i <=n/2;++ i )

{

if(n%i==0)

{

r=1;

break;

}

}

if(r==0)

printf(" Is prime\n ");

else

printf(" not prime\n ");

break;

case 3:

printf("enter the no:");

scanf("%d",&n);

if(n%2==0)

printf("entered no is even no\n");

else

printf("entered no is odd no\n");

break;

case 4:

{

return 0;

}

default :

printf("enter the correct choice and try again!!!!\n");

}

}
}
