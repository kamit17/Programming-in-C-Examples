#include<stdio.h>
int main()
{
    int i;
    float total=0; //holds total sum of the elements of the array.
    float average; //holds avg value of all the elements in the array
    int score[5];
    for(i=0;i<5;i++)
    {
        printf("\n Enter Score:");
        scanf("%d",&score[i]);
    }
    for(i=0;i<5;i++)
    {
        total=total+score[i];
    }
    printf("Total : %f",total);
    average=total/5;
    printf("Avergae Marks:%f \n",average);
}
