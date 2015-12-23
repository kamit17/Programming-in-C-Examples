#include<stdio.h>
#include<conio.h>
int main() {

int min,max,num,range,flag=0;
char ch;




do {

printf("\nEnter number: ");
scanf("%d",&num);

if(flag==0) {

min=num;
max=num;
}

flag++;       /* counting total numbers */

if(min>num)  {
min=num;
}

if(max<num)
max=num;

printf("\n\nEnter another number(Y/N): ");
scanf(" %c",&ch);

}while(ch=='Y' || ch=='y');


range=max-min;

printf("\nTotal number = %d\n",flag);
printf("\nLargest number = %d\n",max);
printf("\nSmallest number = %d\n",min);
printf("\nRange = %d\n",range);


getch();
return 0;
}
