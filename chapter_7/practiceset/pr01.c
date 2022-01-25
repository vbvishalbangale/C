#include <stdio.h>

int main(){

    //? Question no - 1
    // Creat an array of 10 number verify using pointer arithmetic that ( ptr+2 ) 
    // point to the third element where ptr is a pointer pointing to the
    // first element of the array.

    
    
    int num [10];

    //? ye dono same work karege
    // int *ptr = &num[0];
    int *ptr = num; //isme first element ka address hota hai
    ptr = ptr + 2;

    // ptr == &num[2]
    if (ptr == &num[2]){
        printf("yes ptr point this location ");
    }
    else{
         printf("no ptr point this not location");
    }
         






    
    return 0;
}