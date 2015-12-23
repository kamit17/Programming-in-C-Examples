/*A positive integer is entered through the keyboard, write a program to obtain
the prime factors of the number. Modify the function suitably to obtain the prime
factors recursively.*/


/*
This is the part of code where the calculation takes place. The for loop,
for( a = 2; a <= x; a++ ) keeps incrementing the counter, 'a'. We use it to
divide the number that user entered. The if condition, if( x % a == 0 ) checks
if the number is divisible by the current value of the counter 'a'. If that is
the case, we print the number 'a' and call our function prime recursively, but
this time with a value 'x/a' rather than 'x'. With this, we are not stuck in an
infinite recursion of printing the same prime factor. Since we keep on dividing
the number by the prime factor found in last iteration, we are sure of segregating
any multiples of this 'found prime factor'. Hence, we avoid getting the composite
factors, since the counter always starts at 2.Thus only prime factors get printed
on the screen, with a single space separating each of them.*/
#include<stdio.h>
void prime(int x)
{
  int a; //loop counter
  for(a=2;a<=x;a++)
  {
  if(x%a==0)
  {
  printf(" %d\n",a );
  prime(x/a);
  break;
}
}
}

int main()
{
  int number;
  printf("Enter the number: ");
  scanf("%d",&number);
  printf(" The prime factors are : \n");
  prime(number);

  return 0;
}
