#include<stdio.h>
int main()
{
int class,fail;
printf("Enter the class you obtained and number of subject you failed in\n");
scanf("%d%d",&class,&fail);
switch(class)
{
case 1:
if(fail>=3)
printf("You won't get any grace\n");
else
printf("You will get the grace of 5 marks per subject\n");
break;
case 2:
if(fail>=2)
printf("you won't get any grace at all\n");
else
printf("You would get the grace of 4 marks per subject\n");
break;
case 3:
if(fail==1)
printf("you won't get any grace\n");
else
printf("you would get the grace of 5 marks in one subject\n");
}
return 0;
}
