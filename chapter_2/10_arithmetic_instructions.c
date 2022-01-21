#include <stdio.h>

int main()
{
    // Arithmetic Operators

    // make a program to calculate +,-,*,/,% of two numbers
    // int a =3;int b=3;

    // modulo operator % = ye humko remender return karta hai

    // 10/10 = 0 

    int num1, num2;
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    printf("The sum is : %d\n", num1 + num2);
    printf("The subtract is : %d\n", num1 - num2);
    printf("The multiply is : %d\n", num1 * num2);
    printf("The devide is : %d\n", num1 / num2);
    printf("The modulo is : %d\n", num1 % num2);

    return 0;
}