/*
(i)Write a program to find the range of a set of numbers. Range is the difference between
 the smallest and biggest number in the list.*/
  
  #include<stdio.h>
  int main()
  {
  int min,max,num,range,temp=0;
  char ch;
  do
  {
  printf("\n enter the number");
  scanf("%d",&num);
  if(temp==0)
  {
  min=num;
  max=num;
  }
  temp++;
  if(min>num)
  {
  min=num;
  }
  if(max<num)
  
  max=num;
  
 printf("Enter another number (Y/N):");
 scanf(" %c",&ch);
  }
 while(ch=='Y' || ch=='y');
 range=max-min;
 printf("\n Toal number=%d\n",temp);
 printf("\n smallest number = %d\n)",min);
 printf("\n largest number = %d\n)",max);
 printf("\n range = %d\n)",range);
 getch();
 
  }
