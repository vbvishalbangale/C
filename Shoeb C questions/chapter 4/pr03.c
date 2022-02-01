#include <stdio.h>

// make a program to print odd numbers under 100 to 1 in reverse order
// solve using only for loop

int main(){

    int number = 100;

    for (int i = number; i>0; i--)
    {
        if(i%2==1)
        {
            printf("The number is %d\n",i);
        }
    }
    




    
    return 0;
}