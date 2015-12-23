/*(J)
(a) Using conditional operators determine:
(1) Whether the character entered through the keyboard is a lower case alphabet or not.
(2) Whether a character entered through the keyboard is a special symbol or not.*/

/*(a)
#include<stdio.h>
int main() 
{ 
char ch;  
printf("Enter character:"); 
scanf("%c",&ch); 
if(ch>=97&&ch<=122) 
printf("Character entered is lower case");
else 
printf("Character entered is not lower case"); 
printf("\nPress any key to exit.");  
} 
*/

/*b */ 
#include<stdio.h>
int main()
{
char ch;
printf("enter the character: ");
scanf("%c", &ch);
if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>91&&ch<=98)||(ch>=123&&ch<=127))
printf("\n the character is a special symbol\n ");
else 
printf("\n the character is not a special symbol\n");
}