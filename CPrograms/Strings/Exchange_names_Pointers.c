/*Exchanging names using Pointers*/
/*In this program all that we are required to do is exchange the addresses (of the names) stored in the array of pointers, rather than the names themselves.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char *names[]={"name1","name2","name3","name4","name5"};
	char *temp;
 temp=names[2];
 names[2]=names[3];
 names[3]=temp;
 printf("New : %s %s\n",names[2],names[3]);
}
