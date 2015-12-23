#include<stdio.h>
int main()
{

int i,j,k=1,l;
for(i=1;i<=4;i++)
{
for(j=4-1;j>0;j--)
printf(" ");
for(l=i;l>0;l--)
printf("@d",k++);
printf("\n");
}
getch();
}
