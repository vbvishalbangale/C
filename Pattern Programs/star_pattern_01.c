#include <stdio.h>


void PrintPattern()
{
    // if n=4;
    // *
    // **
    // ***
    // ****
    int n;
    printf("Enter the no of lines\n");
    scanf("%d",&n);
    
    // Run this for loop n times
    for (int i = 0; i < n; i++) // no of lines
    {
        for (int j = 0; j < i + 1; j++) // no of * in line
        {
            printf("*");
        }
        printf("\n");

    }
}


int main(){

    PrintPattern();

    
    return 0;
}