/*[C] Write a menu driven program which has following options:1. Factorial of a number.2. Prime or not3. Odd or even4. Exit*/#include<stdio.h>#include<stdlib.h>int main(){int choice,n,c,fact=1;while(1){printf("\n 1.Factorial");printf("\n 2. Prime");printf("\n 3. Odd\Even");printf("\n 4. Exit");printf("\n Your Choice?");scanf("%d",&choice);switch(choice){case 1:printf("enter a number to calculate its factorial\n");scanf("%d", &n);for(c=1;c<=n;c++){fact=fact*c;}printf("Factorial of %d =%d\n", n,fact);break;case 2:printf("\n enter any integer");scanf("%d",&n);for(c=2;c<=n;c++){if(n%c==0){printf(" %d is not a prime number.\n",n);//break;}else if(c==n)printf("%d is prime",n);}break;case 3:printf("enter any integer");scanf("%d",&n);if(n%2==0)printf("number is even\n");else printf("number is odd");break;case 4:exit(0);default:printf("enter the correct choice and try again \n");}}}