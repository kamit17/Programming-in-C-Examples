/*cp and Sp*/
#include<stdio.h>
int main()
{
float cp,sp,profit,loss;
printf("Enter the cost Price and the Selling Price");
scanf("%f\n %f\n",&cp,&sp);
if(cp>sp){

loss=cp-sp;
printf("you have made a loss.Your loss is Rs %f\n",loss);
}
else if(sp>cp){
profit=sp-cp;
printf("you have earned a profit.Your Profit is Rs. %f\n",profit);
}
else if(sp==cp)
printf(" you have neither profit nor loss \n");

}