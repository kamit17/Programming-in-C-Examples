
#include<stdio.h>
int printArray(int theArray[],int sizeofArray);

int main()
{
	int help[3]={56,64,33};
	int ever[6]={454,232,213,33,44,55};

	printArray(help,3);
}






int printArray(int theArray[],int sizeofArray)
{	for(int x=0;x<sizeofArray;x++)
{
	printf("%d\n",theArray[x]);
}
}
