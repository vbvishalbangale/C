#include <stdio.h>

// make a two functions
// 1. function --> print user input number square
// 2. function --> print user input number cube

// ! note: make 2 different functions for each task
// e.g if user input is 2
// square = 2X2 = 4
// cube = 2X2X2 = 8

int square(int use)
{
    return (use * use);
}

int cube(int use1){

    return (use1 * use1 * use1);
}

int main()
{
    int user;

    printf("Enter the number\n");
    scanf("%d", &user);

    int sq = square(user);
    int cub = cube(user);

    printf("The square is %d\n",sq );
    printf("The cube is %d\n", cub);

    return 0;
}
