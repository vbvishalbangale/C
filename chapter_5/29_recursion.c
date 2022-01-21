#include <stdio.h>

// What is Recursion ?
// ye ek aisa function hai jo apne aapko call karta hai
// khud uski hi body me

// what is factorial ?
// factorial of 5 = 5x4x3x2x1;
// factorial of 5 = 120
// note: factorial of 1 is 1 
//       factorial of 0 is 1




int factorial(int n)
{
    if(n==1 || n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){

    int number;
    printf("Enter the number to find its factorial\n");
    scanf("%d",&number);

    printf("The factorial of %d is : %d\n",number,factorial(number));

    

    return 0;
}