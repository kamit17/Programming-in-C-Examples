/*
Write a program which to find the grace marks for a student using switch. The
user should enter the class obtained by the student and the number of subjects
  he has failed in.
− If the student gets first class and the number of subjects he failed in is
greater than 3, then he does not get any grace. If the number of subjects he
failed in is less than or equal to 3 then the grace is of 5 marks per subject.
− If the student gets second class and the number of subjects he failed in is
  greater than 2, then he does not get any grace. If the number of subjects he
  failed in is less than or equal to 2 then the grace is of 4 marks per subject.
− If the student gets third class and the number of subjects he failed in is
greater than 1, then he does not get any grace. If the number of subjects he
failed in is equal to 1 then the grace is of 5 marks per subject
*/
#include<stdio.h>
int main()
{
int  class,failed;
printf("Enter the class obtained \n 1=first class 2=Second 3=Third :");
scanf("%d",&class);
printf("Enter the number of failed subjects");
scanf("%d",&failed);
switch(class)
{
case 1:
if(failed<=3)
printf("\n Grace Marks= 5 marks per subject");

else{
printf("\n no Grace marks");
}
break;

case 2:
if(failed<=2)
{printf("\n Grace Marks= 4 marks per subject");
}
else{
printf("\n no Grace marks");
}
break;

case 3:
if(failed==1)
{
  printf("\n Grace Marks= 3marks per subject");
}
else
{
printf("\n no Grace marks");
}
break;

default:
printf("Error! Wrong Input \n");
break;

}
}
