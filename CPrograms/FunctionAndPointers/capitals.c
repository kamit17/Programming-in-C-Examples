#include<stdio.h>
void capitals(int); //function is going to receive an int argument
int main()
{
	int choice;
	printf("Provide Input\n");
	printf("Enter 1 for India\n");
	printf("Enter 2 for Germany\n");
	printf("Enter 3 for Australia\n");
	scanf("%d",&choice);
	capitals(choice);  //passing the input as an argument
	
}

void capitals(int ch)
{
	switch(ch)
	{
		case 1:
			printf(" Capital: New Delhi");
			break;
		case 2:
			printf("Capital: Berlin");
			break;
		case 3:
			printf("Capital: Canberra");
			break;
		default:
			printf("Enter the correct choice:");
	}
}
