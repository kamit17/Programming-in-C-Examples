#include <stdio.h>

#define YES 1
#define NO 0

//Function to determing if an integer is even .

int isEven (int number)
{
    int answer;

    if(number % 2 == 0)
            answer = YES;
        else 
            answer = NO;
        return answer;
}

int main(void)
{
    int isEven (int number);

    if(isEven (17) == YES)
        printf("YES\n");
    else 
    printf("NO\n");

}
