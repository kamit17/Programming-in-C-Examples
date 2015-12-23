#include<stdio.h>
int main()
{
	char *ptr[]={ 
	"January","February",
	"March","April","May",
	"June","July","August",
	"Septermber","Octoboer",
	"November","December"
	}; // first speify the datatype of the array
	int i;
	for(i=0;i<12;i++)
	{
		printf("Month %d: %s\n",(i+1),ptr[i]);
	}
}
