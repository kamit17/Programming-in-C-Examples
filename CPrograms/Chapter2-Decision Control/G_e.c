/*
A certain grade of steel is graded according to the following conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of hardness, carbon content 
and tensile strength of the steel under consideration and output the grade of the steel.*/

#include<stdio.h>
int main()
{
int h,ts,grade;
float cc;
printf("Enter the Hardness of the steel \n");
scanf("%d",&h);
printf("enter the Carbon content of the steel \n");
scanf("%f", &cc);
printf("enter the tensile strength of the steel \n");
scanf("%d",&ts);
if(h>50 && cc<0.7 && ts>5600)
printf("The steel is Grade 10 \n");
else if(h>50 && cc<0.7)
printf("Grade 9 Steel \n");
else if(ts>5600 && cc<0.7)
printf("Grade 8 Steel \n");
else if(h>50 && ts>5600)
printf("Grade 7 Steel \n");
else if(h>50 ||cc<0.7 || ts>5600)
printf("Grade 6 Steel \n");
else
printf("Grade 5 steel \n");
}