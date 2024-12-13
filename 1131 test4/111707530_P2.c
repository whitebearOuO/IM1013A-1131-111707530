#include<stdio.h>

char board(char, char, char, char, char, char, char, char, char);

int main()
{
    char hit[1000];
    char board1='1', board2='2', board3='3', board4='4', board5='5', board6='6', board7='7', board8='8', board9='9';
    int counter=0, control=0; //counter for ball, control for duplicate
    printf("Welcome to the Baseball Game!\n");
    board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
    while(1)
    {
        hit[2]='.';//initialize
        hit[1]='.';//initialize
        printf("\nEnter the number of the grid you hit (1-9), or enter 0 if you missed: ");
        scanf("%1000s", &hit);
        if(hit[2]!='.')//input>9 or -X
            printf("there is no this number.\n");
        else
        {
            if(hit[0]=='0')//miss
            {
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                printf("Missed! Try again.\n");
                counter++;
            }
            //hit
            else if(hit[0]=='1')
            {
                if(board1=='X')
                    control=1; //duplicate
                board1='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='2')
            {
                if(board2=='X')
                    control=1; //duplicate
                board2='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='3')
            {
                if(board3=='X')
                    control=1; //duplicate
                board3='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='4')
            {
                if(board4=='X')
                    control=1; //duplicate
                board4='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='5')
            {
                if(board5=='X')
                    control=1; //duplicate
                board5='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='6')
            {
                if(board6=='X')
                    control=1; //duplicate
                board6='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='7')
            {
                if(board7=='X')
                    control=1; //duplicate
                board7='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='8')
            {
                if(board8=='X')
                    control=1; //duplicate
                board8='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            else if(hit[0]=='9')
            {
                if(board9=='X')
                    control=1; //duplicate
                board9='X';
                board(board1, board2, board3, board4, board5, board6, board7, board8, board9);
                if(control==1)
                {
                    printf("Sorry, You had hit this position. Try again.\n");
                    control=0;
                }
                counter++;
            }
            //hit end

            //win
            if(board1=='X' && board2=='X' && board3=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            if(board4=='X' && board5=='X' && board6=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            if(board7=='X' && board8=='X' && board9=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            if(board1=='X' && board4=='X' && board7=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            if(board2=='X' && board5=='X' && board8=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            if(board3=='X' && board6=='X' && board9=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            if(board1=='X' && board5=='X' && board9=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            if(board3=='X' && board5=='X' && board7=='X')
            {
                printf("Congratulations, you win!\n");
                break;
            }
            //end win

            //lose
            if(counter>=4)
            {
                printf("Game over, you didn't complete a line.\n");
                break;
            }
        }
    }
}//end main

//function
char board(char board1, char board2, char board3, char board4, char board5, char board6, char board7, char board8, char board9)
{
    printf(" %c | %c | %c \n", board1, board2, board3);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board4, board5, board6);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board7, board8, board9);
}