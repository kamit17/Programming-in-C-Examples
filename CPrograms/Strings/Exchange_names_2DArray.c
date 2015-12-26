#include<stdio.h>
#include<string.h>
int main()
{
	char names[][10]={"akshay","parag","Raman","srinivas","srikanth"};
	int i;
	char t;
	printf("\nOriginal name: %s %s",&names[2][0],&names[3][0]);
	for(i=0;i<=9;i++)
	{
		t=names[2][i];
		names[2][i]=names[3][i];
		names[3][i]=t;
	}
	printf("\nNew names : %s %s\n",&names[2][0],&names[3][0]);
}
