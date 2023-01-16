#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_int(int min, int max)
{
    return rand() % (max - min) + min;
}

char *choices[3] = {"Rock", "Paper", "Scissors"};

struct round
{
    int player_choice;
    int computer_choice;
};

int get_player_input()
{
    int choice;
    scanf("%d", &choice);
    return choice;
}

int main()
{
    srand((unsigned int)time(0));

    printf("Choose one of the following: \n");
    printf("Rock: 0, Paper: 1, Scissors: 2 \n");

    int computer_choice = random_int(0, sizeof(choices) / sizeof(choices[0]));
    int player_input = get_player_input();
    char *player_choice = choices[player_input];

    printf("The you chose: %s \n", player_choice);
    printf("The Computer chose: %s \n", choices[computer_choice]);

    switch (player_input)
    {
    case 0:
        if (computer_choice == 1)
        {
            printf("Paper beats Rock. \n");
        }
        else if (computer_choice == 2)
        {
            printf("Rock beats Scissors. \n");
        }
        break;
    case 1:
        if (computer_choice == 0)
        {
            printf("Paper beats Rock. \n");
        }
        else if (computer_choice == 2)
        {
            printf("Scissors beats Paper. \n");
        }
        break;
    case 2:
        if (computer_choice == 0)
        {
            printf("Rock beats Scissors. \n");
        }
        else if (computer_choice == 1)
        {
            printf("Scissors beats Paper. \n");
        }
        break;
    default:
        printf("You both chose %s, it's a draw! \n", player_choice);
        break;
    }

    return 0;
}
