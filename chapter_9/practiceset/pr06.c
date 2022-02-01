#include <stdio.h>

// Create an array of 5 complex numbers created in program 5 and display then with the help 
// of a display function .The values must be taken as an input from the user

typedef struct complex
{
    int x;
    int y;

}complex;


void display(complex c)
{
    printf("The X value is : %d\n",c.x);
    printf("The Y value is : %d\n",c.y);
}

int main(){

    complex number[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter X value of %d number : ",(i+1));
        scanf("%d", &number[i].x);

        printf("Enter Y value of %d number : ",(i+1));
        scanf("%d", &number[i].y);
    }

    printf("\n");

    for (int i = 0;i<5;i++)
    {
        display(number[i]);
    }

        return 0;
}