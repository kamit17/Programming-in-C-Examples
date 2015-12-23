#include<stdio.h>
int binary(int);
int main()
{
int num;

printf(“\nEnter The Number: “);
scanf(“%d”,&num);
binary(num);
printf(“\n Press any key to exit…..”);
//getch();
}
//function to convert deciaml to binary
int binary (int n)
{
int r;
r=n%2;
n=n/2;
if (n==0)
{
printf(“nThe binary equivalent is %d”,r);
return(r);
}
else
binary(n);
printf(“%d”,r);
}