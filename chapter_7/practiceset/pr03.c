#include <stdio.h>

int main(){

    //? Question 3 :
    // Write a program to create an array of 10 integers
    // and store multiplication table of 5 in it

    int vb[10];

    for (int i = 0; i < 10; i++)
    {
        vb[i] =  5 * (i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d\n" ,(i+1),vb[i]);
    }
        
    
    return 0;
}
