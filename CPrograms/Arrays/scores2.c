/*This program uses functions to read scores into an array and to print the scores
  */
include<stdio.h>
#define MAX 10

int read_intarray(int scores[],int lim);
void print_intarray(int scores[],int lim);
int main()
{
	int n,exam_scores[MAX];
	printf("****List of Exam Scores****\n\n");
	n=read_intaray(intaray(exam_scores,MAX);
			print_intaray(exam_scores,n);
			}

/*Function reads scores in an array.*/
int read_intaray(int_scores[],int lim)
{
int n,count=0;
printf("Type Scores,EOF to quite\n");
while((count<lim)&&(scanf("%d",&n)!=EOF))
{
scores[count]=n;
count++;
}
return count;
}
/*Fucntion prints lim elements in the array scores. */
void print_intaray(int_scores[],int lim)
{
int i;

printf("\n***Exam Scores***\n\n");
for(i=0;i<lim;i++)
	printf("%d\n",scores[i]);
}


