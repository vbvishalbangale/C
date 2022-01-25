#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GameWithComp();
void GameFriend()
{
    char player, comp;

    printf("Enter You choice : ");
    scanf(" %c", &player);
    printf("Enter Computer choice : ");
    scanf(" %c", &comp);

    if (player == comp)
    {
        printf("Match tie\n");
    }
    else if (player == 'R' && comp == 'S')
    {
        printf("You Win\n");
    }
    else if (player == 'R' && comp == 'P')
    {
        printf("Computer Win\n");
    }
    else if (player == 'S' && comp == 'P')
    {
        printf("You Win\n");
    }
    else if (player == 'S' && comp == 'R')
    {
        printf("Computer Win\n");
    }
    else if (player == 'P' && comp == 'S')
    {
        printf("You Win\n");
    }
    else if (player == 'P' && comp == 'R')
    {
        printf("Computer Win\n");
    }
}


int main()
{

    // Game();
    GameWithComp();

    return 0;
}






void GameWithComp()
{
    char player, comp;
    int random;

    printf("Enter your choice : ");
    scanf(" %c", &player);


    srand(time(0));
    random = rand()%3 + 1; // it generates random number between 1 to 3

    switch (random)
    {
    case 1:
        comp = 'R';
        break;
    case 2:
        comp = 'P';
        break;
    case 3:
        comp = 'S';
        break;
    default:
        break;
    }


    if (player == comp)
    {
        printf("Match tie\n");
        printf("Computer choses %c\n",comp);

    }
    else if (player == 'R' && comp == 'S')
    {
        printf("You Win\n");
        printf("Computer choses %c\n",comp);

    }
    else if (player == 'R' && comp == 'P')
    {
        printf("Computer Win\n");
        printf("Computer choses %c\n",comp);
    }
    else if (player == 'S' && comp == 'P')
    {
        printf("You Win\n");
        printf("Computer choses %c\n",comp);

    }
    else if (player == 'S' && comp == 'R')
    {
        printf("Computer Win\n");
        printf("Computer choses %c\n",comp);
    }
    else if (player == 'P' && comp == 'S')
    {
        printf("Computer Win\n");
        printf("Computer choses %c\n",comp);
    }
    else if (player == 'P' && comp == 'R')
    {
        printf("You Win\n");
        printf("Computer choses %c\n",comp);

    }
}