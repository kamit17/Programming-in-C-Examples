/*
Write a program for a matchstick game being played between the computer and a user. 
Your program should ensure that the computer always wins. Rules for the game are as 
follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
− After the person picks, the computer does its picking.
− Whoever is forced to pick up the last matchstick loses the game.
*/

/*Logic behind Program*/
/*
-There are 21 matchsticks.
-Whoever is forced to pick up the last matchstick loses the game.
So the last one is special, so it's all about how to get rid of 20 matches in pairs of turns.

-The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
So if we reduce the total by 5 each round, the sequence will go
21 16 11 6 1
In effect, whatever number the user picks (n), the computer picks 5-n
*/

#include<stdio.h>
int main()
{
int matchsticks=21,user,computer;
while(matchsticks>=1)
{
printf("\n number of matchsticks now is %d" ,matchsticks);
printf("\n your turn\n");
printf("\n pick up the matchsticks(1-4) :");
scanf("%d", &user);
printf("number of matchstiks chosen by you are %d",user);

if(user>4)
{
printf("invalid selection");
break;
}
computer=5-user;
printf("\n computer's turn ..\n");
printf("\n computer chooses %d", computer);
matchsticks=matchsticks-user-computer;
continue;
if(matchsticks==1)
break;
}
matchsticks--;
printf("\n Computer wins\n");
}



