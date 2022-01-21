#include <stdio.h>
#include <stdlib.h> // ye random number ke liye
#include <time.h>   // ye program ko har time different run karne ke liye

int main()
{

    // * Vishal Guess Game in C language

    int rand_number;
    int userInput;
    int no_of_inputs = 1;
    srand(time(0));                // iska matlab har time program diffent run hoga
    rand_number = rand() % 50 + 1; // ye generate karega 1 se 50 tak numbers
    // printf("The random number is : %d",number);

    printf("Guess the number between 1 to 50\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &userInput);

        if (userInput == 1010)
        {
            printf("The number is %d\n",rand_number);
        
        }
        else if (userInput < rand_number)
        {
            printf("Please enter higher value\n");
            no_of_inputs++;
        }
        else if (userInput > rand_number)
        {
            printf("Please enter lower value\n");
            no_of_inputs++;
        }
        else
        {
            printf("You Win! you guessed the number in %d attempts\n", no_of_inputs);
        }

    } while (userInput != rand_number);

    return 0;
}