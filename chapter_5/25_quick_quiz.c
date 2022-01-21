#include <stdio.h>

// make 3 functions
// good morning  --> printf("Good Morning!");
// good afternoon --> printf("Good Afternoon!");
// good night --> printf("Good Night!");

// GoodMorning --> pascal case naming convention
// goodMorning --> camel case naming convention

void Good_Morning();

void Good_Afternoon();

void Good_night();

int main()
{

    Good_Morning();

    return 0;
}


//? note : hum functions ke andar bhi dusre functions call kara sakte hai
void Good_Morning() 
{
    printf("Good morning\n");
    Good_Afternoon();
}

void Good_Afternoon()
{
    printf("Good Afternoon\n");
    Good_night();
}

void Good_night()
{
    printf("Good night\n");
}