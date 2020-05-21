/*Program to calculate the average of a set of grades and count the number of failing test grades */
#include<stdio.h>

int main(void)
{
    int numberOfGrades,i,grade;
    int gradeTotal=0; //User to keep cumulative total of the grades
    int failureCount=0; //number of failing test grades
    float average;

    printf("How many grades will you be entering? ");
    scanf("%i",&numberOfGrades);

    for(i=1;i<=numberOfGrades; i++) //loop to enter the number of grades
    {
        printf("Enter grade #%i: ",i); //prompts the user to enter the grade
        scanf("%i",&grade);

        gradeTotal=gradeTotal+grade;  //value of grades is added.


        if(grade<65)
            ++failureCount;
    }

    average=(float) gradeTotal / numberOfGrades;

    printf("\nGrade average= %.2f\n",average);
    printf("Number of Failure=%i\n",failureCount);

    return 0;
}
