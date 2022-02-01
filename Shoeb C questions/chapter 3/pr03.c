#include <stdio.h>

// find the user input number is even or odd

int main()
{

    int number;

    printf("Enter the number\n");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("your number is even\n");
    }
    else
    {
        printf("your number is odd\n");
    }

    return 0;
}