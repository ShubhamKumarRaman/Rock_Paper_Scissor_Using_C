#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int yourChoice, ComputerChoice;
    int YourScore = 0, ComputerScore = 0;
    printf("Welcome to Rock Paper Scissor Game\n");
    while (1)
    {
        if (YourScore == 10 || ComputerScore == 10)
        {
            break;
        }
        printf("\n\n\t\t\t\t\t\tYour Score: %d\n\t\t\t\t\t\tComputer's Score: %d\n", YourScore, ComputerScore);

        printf("\n\n\n\t\t\t\tEnter 1 for ROCK, 2 for PAPER and 3 for SCISSOR\n\t\t\t\t\t\t\t");
        scanf("%d", &yourChoice);
        ComputerChoice = rand() % 3 + 1;
        if (yourChoice == 1)
        {
            if (ComputerChoice == 1)
            {
                printf("Your Choice: ROCK\nComputer's Choice: ROCK\nIt's a Draw\n");
            }
            else if (ComputerChoice == 2)
            {
                printf("Your Choice: ROCK\nComputer's Choice: PAPER\nComputer Wins\n");
                ComputerScore++;
            }
            else
            {
                printf("Your Choice: ROCK\nComputer's Choice: SCISSOR\nYou Win\n");
                YourScore++;
            }
        }
        else if (yourChoice == 2)
        {
            if (ComputerChoice == 1)
            {
                printf("Your Choice: PAPER\nComputer's Choice: ROCK\nYou Win\n");
                YourScore++;
            }
            else if (ComputerChoice == 2)
            {
                printf("Your Choice: PAPER\nComputer's Choice: PAPER\nIt's a Draw\n");
            }
            else
            {
                printf("Your Choice: PAPER\nComputer's Choice: SCISSOR\nComputer Wins\n");
            }
        }
        else if (yourChoice == 3)
        {
            if (ComputerChoice == 1)
            {
                printf("Your Choice: SCISSOR\nComputer's Choice: ROCK\nComputer Wins\n");
                ComputerScore++;
            }
            else if (ComputerChoice == 2)
            {
                printf("Your Choice: SCISSOR\nComputer's Choice: PAPER\nYou Win\n");
                YourScore++;
            }
            else
            {
                printf("Your Choice: SCISSOR\nComputer's Choice: SCISSOR\nIt's a Draw\n");
            }
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }
    printf("\n\n\n\n\t\t\t\t-----------------------------------------------------\n");
    printf("\n\n\n\n\t\t\t\tYour Score: %d\n\t\t\t\tComputer's Score: %d\n", YourScore, ComputerScore);
    if (YourScore == 10)
    {
        printf("\n\n\n\n\t\t\t\t\t\t\tYou Win\n");
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t\t\t\tComputer Wins\n");
    }
    printf("\n\n\n\n\t\t\t\t-----------------------------------------------------\n");
    getch();
}