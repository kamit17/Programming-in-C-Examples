/*Write a program to produce the following output:
A B C D E F G F E D C B A
A B C D E F     F E D C B A
A B C D E           E D C B A
A B C D                 D C B A
A B C                        C B A
A B                               B A
A                                      A
*/


//ASCII value of A through F = 65 to 71
//ASCII value of Space = 32




#include<stdio.h>
int main()
{

int iteration, space, last=70,new_value=70, put_space=1;

char alphabet;

printf("ABCDEFGFEDCBA\n");

//This for loop decides the number of iterations that are to be carried out.
for (iteration=1; iteration<=6; iteration++)

{

//This for loop is for incrementing the alphabets

for (alphabet=65; alphabet<=last; alphabet++)

{
printf("%c", alphabet);
continue;
}

last--;


//This for loop is for generating the appropriate spaces.
//space variable decides the number of times we require the spaces,
//and put_space is the actual variable that determines the number of spaces.
for (space=1; space<=put_space; space++)

{
printf("%c", 32);

}
put_space=put_space+2;

//This for loop is for decrementing the alphabets.
for (alphabet=new_value; alphabet>=65; alphabet--)

{
printf("%c", alphabet);
continue;
}

new_value--; 
printf("\n");
}
getch();
}
