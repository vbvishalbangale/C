#include <stdio.h>

int main()
{

    // ? question 1
    // * Write a program to print multiplication table table of given number
    // ? hint : --> int num lele input, fir for loop chala 1 se 10 tak

    // int number;

    // printf("Enter the number : " );

    // scanf("%d" ,&number);
    // number matlab hame konse number ka table print karna hai
    // if n = 8;
    // * 8 X 1 = 8
    // number i = (number*i)

    // * formal multiplication table
    // for(int i=1; i<=10; i++){
    //     printf("%d X %d = %d\n",number,i,(number*i));

    // }

    // ? question 2 Write a program to print multiplication table table of given number
    // * in reverse order

    // for(int i=10; i>=1; i--)
    // {
    //     printf("%d X %d = %d\n",number,i,(number*i));
    // }

    // ? question 5
    // * write a program to sum first ten natural numbers using while loop
    // 1+2+3+4+5+6+7+8+9+10 = ?

    // ? question 6
    // * Implement problem 5 using do while and for
    // int total = 0;

    // int i=1;

    // * while mai pahele condition cheack karega
    // * using while loop
    // while (i<=10)
    // {
    //     total = total + i;
    //     i++;
    // }

    // * using do while loop

    //? do while me wo direct entry kar lega
    //? condition true hai ya false hai usko farak nahi padega
    //? condition wo last me jate jate dekhega
    //? agar wo true hai to andar aayega warna false hai to wahi se laut jayega
    // iski wajah se do while loop  // ! kam se kam ek baar run hota hai

    // do
    // {
    //     total = total + i;
    //     i++;
    // } while (i<=10);

    // * using for loop

    //     for(i; i<=10; i++)
    //     {
    //         total += i; //? ye shortcut hai iska --> total = total + i;
    //         //? ye dono same work karege
    //     }

    // printf("The total is : %d\n",total);

    // ? question 7
    // * Write a program to print sum of multiplication table table of given number
    //? e.g ., 8 X 1 = 8 and 8 + 1 = 9
    //?    8 X 2 = 16 and 8 + 2  = 10

    // int number;

    // printf("Enter the number : ");
    // scanf("%d", &number);

    // for (int j = 1; j <= 10; j++)
    // {
    //     printf("%d X %d = %d : %d + %d = %d \n ", number, j, (number * j), number, j, (number + j));
    // }

    // ? question 8
    // * Write a program to calculate the factorial of a given number using for loop

    // ? note factorial of 0 is 1
    // ?      factorial of 1 is 1
    //* Factorial 5 = 5x4x3x2x1 
    //? Factorial 5 = 120

    // int n;
    // int factorial=1;

    // printf("Enter the number to find its factorial\n");
    // scanf("%d",&n);
    

    // * factorial using for loop
    // for (int i = 1; i <= n; i++)
    // {
    //     // factorial = factorial * i;
    //     factorial *= i;
    // }

    // * factorial using while loop

    // int j=1;

    // while (j<=n)
    // {
    //     factorial *= j;
    //     j++;
    // }
    

    // printf("The factorial of %d is : %d\n",n,factorial);


    // ? question 9
    // * Write a program to check weather a given number is prime or not --> using loops

    //? what is prime number?
    //* aisa number jo khud se ya 1 se full divide ho

    int num;
    int prime = 1;

    printf("Enter the number to check its prime or not\n");
    scanf("%d",&num);

    // * using for loop
    // for (int i = 2; i < num; i++)
    // {
    //     if(num%i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }

    // * using while loop 

    int j=2;

    // while (j<num)
    // {
    //     if(num%j ==0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    //     j++;
    // }
    





    // * using do while loop

        do
        {
            if(num%j ==0){
                prime = 0;
            }
            j++;    
        } while (j<num);
        

        





    if(prime)
    {
        printf("This is a prime number\n");
    }
    else{
        printf("This is not a prime number\n");
    }
    







    
    return 0;
}
