#include<stdio.h>
#include<string.h>
int main()
{

    char str1[]="Have a nice Day....";
    char str2[21]="and an amazing night";
   // printf("The size of the String is : %d",strlen(str1));
    //strcpy(str2,str1);
   // printf("%s",str2);
    printf("%s",strcat(str1,str2));

}

