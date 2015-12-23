#include<stdio.h>
#include<string.h>
int main()
{
	char source[]="Sayonara";
	char target[20];
	strcpy(target,source);
	printf("\nSource string=%s",source);
	printf("\ntarget string=%s",target);
}
