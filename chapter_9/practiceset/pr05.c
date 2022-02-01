#include <stdio.h>

// Write a program with a structure representing a complex number
// what is a complex number : x + yi  (i ko bolte iota) --> aayota

 struct complex{
    int x;
    int y;
} ;

int main(){

    struct complex number;
    number.x = 10;
    number.y = 20;

    printf("The complex number is : %d + %di\n", number.x , number.y);

    return 0;
} 