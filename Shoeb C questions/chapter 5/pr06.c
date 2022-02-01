// write a recursion function to calculate factorial number

// 5 = 5x4x3x2x1 = 120

#include <stdio.h>

void Factorial_iterative(int Num)
{
    int factorial= 1;
    for (int i = 1; i <= Num;i++){
        factorial *= i;
    }

    printf("The factorial of %d is : %d\n", Num, factorial);
}



int Factorial_recursive(int Num)
{
    if (Num==0 || Num==1){
        return 1;
  }
    return Num * Factorial_recursive(Num-1);
}





int main(){

    int Num;

    printf("Enter the Number: ");
    scanf("%d", &Num);

    Factorial_iterative(Num);
    int result = Factorial_recursive(Num);
    printf("The factorial of %d is : %d\n", Num, result); 

    return 0;
}