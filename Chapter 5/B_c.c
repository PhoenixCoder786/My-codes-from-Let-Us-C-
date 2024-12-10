#include <stdio.h>

int main()
{
    int total_matchsticks = 21, players_choice, computers_choice;
    printf("Welcome to the matchstick game!\n");
    printf("The rules are as follows -- \n");
    printf("\t--There are 21 matchsticks.\n");
    printf("\t--The computer asks the player to pick 1, 2, 3, or 4 matchsticks.\n");
    printf("\t--After the person picks, the computer does its picking.\n");
    printf("\t--Whoever is forced to pick up the last matchstick loses the game.\n");
    while (1)
    {
        printf("Enter your choice - \n");
        scanf("%d", &players_choice);
        if (players_choice>4)
        {
            printf("Wrong choice! Enter again - \n");
            continue;
        }
        
        total_matchsticks -= players_choice;
        if (total_matchsticks == 1)
        {
            printf("Only one matchstick is left. Computer is forced to take it.\n");
            printf("You won!");
            break;
        }
        else
        {
            printf("Total matcksticks left is %d\n", total_matchsticks);
        }

        computers_choice = 5 - players_choice;
        printf("Computer chose %d matchsticks.\n",computers_choice);
        total_matchsticks -= computers_choice;

        if (total_matchsticks == 1)
        {
            printf("Only one matchstick is left. You is forced to take it.\n");
            printf("You lose!\n");
            break;
        }
        else
        {
            printf("Total matcksticks left is %d\n", total_matchsticks);
        }
    }

    return 0;
}
