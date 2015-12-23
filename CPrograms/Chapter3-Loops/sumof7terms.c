/*Write a program to add first seven terms of the following series using a for loop:
1/1!+2/2!+3/3! …… */
#include<stdio.h>
int main()
{
float result, temp_calc, num, temp, factorial;

result=0;

for (num=1; num<=7; num++)

{
for (temp=1, factorial=1; temp<=num; temp++)

{

factorial = factorial*temp;

temp_calc = (num/factorial);



}

result=result+temp_calc;


}



printf("(1/1!) + (2/2!) + (3/3!) + (4/4!) + (5/5!) + (6/6!) + (7/7!) = %f", result);
getchar();

}
