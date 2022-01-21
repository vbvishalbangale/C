#include <stdio.h>

//? make a function to calculate following operations on two user input numbers
//* operations +, - , * , / , %


void Calculater(); // function prototype


int main(){

    Calculater(); // function call
    return 0;
}
void Calculater(){ // function definition
// void Calculater(){ // ? khaali bracket matlab ander void hota hai
// void Calculater(int a,int b){ //! iska matlab hai humko value program ke andar hee deni hai

    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("\n\nThe value of a + b  : %d\n",(a+b));
    printf("\nThe value of a + b  : %d\n",(a+b));
    printf("\nThe value of a * b  : %d\n",(a*b));
    printf("\nThe value of a / b  : %d\n",(a/b));
    printf("\nThe value of a %% b : %d\n",(a%b));
    
}