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



/*---------------------------------A Different Approach--------------------------------*/
 /*
 #include<stdio.h>
int main()
{
    
    int usr=0,i,comp=0,rmnf,rmn=21;
    printf("Rules For The Game:\n");
    printf("1.There are total 21 matchsticks.\n2.You can select either 1, 2, 3 or 4 
    matchsticks at a time.\n3.After the person picks Computer does its picking\n4.
    Whoever is forced to pick up the last matchstick loses the game.");
    do
    {
        rmn=rmn-comp;
        printf("\n\nRemaining Matchsticks: %d",rmn);
        printf("\nEnter number of matchsticks you pick: ");
        scanf("%d",&usr);
        clrscr();
        if((usr<=4 && rmn>=6) || (usr==1 && rmn<=6))
        {
            rmn=rmn-usr;
            if(rmn!=0)
            {
                comp=5-usr;
                printf("\nYou have selected %d Matchsticks",usr);
                printf("\nComputer Selected %d Matchsticks",comp);
            }
            else if(rmn==0)
            {
                printf("\nRemaining Matchsticks Are %d",rmn);
                printf("\nYou Picked Last Matchstick");
                printf("\nYOU LOST THE GAME");
                break;
            }
        }
        else
        {
            printf("\nPlease Enter a valid choice i.e. 1 2 3 or 4");
            comp=0;
        }
    }while(1);
    
}
 */

/****************************************************************************************
The logic behind the program is:
There are total 21 matchsticks and who forced to select last one is lost and we wanted to 
make a program in which computer always win so the last matchstick should be selected by 
the user. so we wanted that whenever the last selection of user is come into the picture 
at that time there should be only 1 matchstick remaining and there is a rule that user 
or computer can select at most 4 matchsticks at a time so for making force on user to 
select last matchstick whenever the user's second last (last is the turn when there is
 only 1 matchstick remaining) selection turn is arrived at that time there should be 6 
 matchsticks remaining so user selects any number of match sticks from 1,2,3 or 4 after 
 that computer selects (5-number of matchsticks selected by the user) so at the selection
 turn of user there is only one matchstick is remaining. This last step is possible only
 if at each turn the sum of selected matchsticks by computer and selected matchsticks 
by user is 5. so we tell the computer via program that after each time the selection 
done by user computer should select (5-number of matchsticks selected by the user) 
matchsticks so at each turn there should 5 matchsticks less than the previous turn.

So the whole program is run in following fashion
At 1st turn
Remaining Matchsticks :- 21
User selects 1,2,3 or 4 matchsticks
Computer Selects 5-number of matchsticks selected by the user

At 2nd turn
Remaining Matchsticks :- 16
User selects 1,2,3 or 4 matchsticks
Computer Selects 5-number of matchsticks selected by the user

At 3rd turn
Remaining Matchsticks :- 11
User selects 1,2,3 or 4 matchsticks
Computer Selects 5-number of matchsticks selected by the user

At 4th turn
Remaining Matchsticks :- 6
User selects 1,2,3 or 4 matchsticks
Computer Selects 5-number of matchsticks selected by the user

At 5th turn
Remaining Matchsticks :- 1
User selects 1 matchstick because only 1 matchstick is remaining
***************************************************************************************/