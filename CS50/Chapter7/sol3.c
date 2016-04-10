
#include<stdio.h>
int main (void)
{
    int ratingCounters[11],i,response , n;

  /*  printf("Enter the total number of responses");
    scanf("%i\n",n);*/
    for( i = 1; i<=10; ++i)
        ratingCounters[i]=0;

    printf("enter your response\n");
    printf("Enter 999 if you want to exit\n");

    for(i=1; i<=999;++i)
    {
        scanf("%i",&response);

        if (response == 999)
        break;

        if(response <1 || response > 10)
            printf("Bad response: %i\n",response);

        else
        ++ratingCounters[response];

    }

    printf("\n\nRating Number of Responses\n");
    printf("------ -----------------\n");

    for( i =1; i<=10 ;++i)
        printf("%4i%4i%41\n",i,ratingCounters[i]);

    return 0;
}
