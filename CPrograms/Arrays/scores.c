/*File:Scores.c
  This program reads a list of integer exam scores and prints them out.
  */
#include<stdio.h>
#define MAX 100

int main()
{
	int exam_scores[MAX],index,n,count;//Declaring an array

	printf("***List of Exam Scores***\n\n");
	printf("Type Scores, EOF to quit\n");

	/*reas scores and stores them in an array*/
	index =0;
	while((index<MAX)&&(scanf("%d",&n)!=EOF))
		exam_scores[index++]=n;
	count=index;

	/*print scores from the array*/
	printf("\n***Exam Scores***\n\n");
	for(index =0;index<count;index++)
		printf("%d\n",exam_scores[index]);
}


