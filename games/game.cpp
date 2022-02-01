#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Game
{

private:
    int rand_number;
    int n_guess = 1;
    int guess;

    void Random()
    {
        srand(time(0));
        rand_number = (int) rand() % 100+1;
    }

public:
    void PlayGame()
    {
        Random();

        cout << "Guess the number between 1 to 100" << endl;

        do{
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < rand_number){
            cout << "Please enter higher value" << endl;
        }
        else if(guess > rand_number){

            cout << "Please enter lower value" << endl;
        }
        else {
            cout << "You win! in " << n_guess << " attempts" << endl;
        }
        n_guess++;
        
        } while (guess != rand_number);
    }
};

int main()
{

    Game vishal;
    vishal.PlayGame();

    return 0;
}