// make a program to input user height in feet and 
// convert the height in cm and print it
// 1 feet = 30.48 cm

#include <stdio.h>

int main(){

    float height;

    printf("Enter your height :");
    scanf("%f",&height);

    printf("Your height in cm is : %f\n", height*30.48);
    return 0;
} 