/*driver insurance with logical operators*/
#include<stdio.h>
int main()
{
int age;
char sex,ms;
printf("enter the age,sex and martial status of the driver \n");
scanf("%d%c%c", &age,&sex,&ms);
if((ms=='M')||(ms=='U'&& sex=='M'&& age>30)||(ms=='U' && sex=='F' && age >25))
{
printf("Driver is insured \n");
}
else
{
printf("Driver is uninsured \n");
}

}