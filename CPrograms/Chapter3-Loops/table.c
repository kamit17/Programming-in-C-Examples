/*Write a program to print the multiplication table of the number entered by the
 user. The table should get displayed in the following form.*/
 #include<stdio.h>
 int main()
 {
 
 int num,a=1,res;
 printf("Enter any number");
 scanf("%d",&num);
 for(a=1;a<=10;a++)
 {
 res=a*num;
 printf("%d*%d=%d\n",num,a,res);
 }
 getch();
}
