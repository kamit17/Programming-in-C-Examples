#include<stdio.h>
#include<string.h>
int main()
{
	char arr[30]="Bamboozled";
	int len1,len2;
	len1=strlen(arr);
	len2=strlen("Humpty Dumpty");
	printf("\nString =%s lenght=%d",arr,len1);
	printf("\nString=%s lenght=%d","Humpty Dumpty",len2);
}

