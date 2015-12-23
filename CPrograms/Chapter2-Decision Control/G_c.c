/*(c) An Insurance company follows following rules to calculate premium.
(1) If a person’s health is excellent and the person is between 25 and 35 years of age
 and lives in a city and is a male then the premium is Rs. 4 per thousand and his 
 policy amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that the sex is female then 
the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25 and 35 years of age and 
lives in a village and is a male then the premium is Rs. 6 per thousand and his 
policy cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.

Write a program to output whether the person should be insured or not, his/her 
premium rate and maximum amount for which he/she can be insured.*/

#include<stdio.h>
int main()
{
int age,health,premium,pamnt,rsdnc,sex;
long amount;
printf("Enter the health of the person \n(1 for excellent and 2 For poor:)\n");
scanf("%d", &health);
printf("enter the age of the person\n");
scanf("%d",&age);
printf("enter the sex of the person :\n(1 for Male and 2 for Female:)\n");
scanf("%d",&sex);
printf("enter the residence\n(1 for city and 2 for village:)\n");
scanf("%d",&rsdnc);

if(health==1 && age>=25 && age<=35 && rsdnc==1 && sex==1)
{
premium=4;
amount=200000;

printf("this person is insured");
printf("premium rate %d Rupees per thousand \n", premium);
printf("person can be insured for maximum amount of %ld Rupees\n",amount);
}
else if(health==1 && age>=25 && age<=35 && rsdnc==1 && sex==2)
{
premium=3;
amount=100000;

printf("this person is insured");
printf("permium rate %d Rupees per thousand \n", premium);
printf("person can be insured for maximum amount of %ld Rupees\n",amount);
}

else if(health==2 && age>=25 && age<=35 && rsdnc==2 && sex==1)
{
premium=6;
amount=10000;

printf("this person is insured");
printf("permium rate %d Rupees per thousand \n", premium);
printf("person can be insured for maximum amount of %ld Rupees\n",amount);
}
else
printf("the person cannot be insured.\n");
}