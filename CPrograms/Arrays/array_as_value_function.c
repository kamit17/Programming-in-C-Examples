#include<stdio.h>
int main()
{
	int i;
	int marks[]={55,56,57,58,59,60};

	for(i=0;i<5;i++)
	display(marks[i]);

}
display(int m)
{
	printf("%d",m);
}
