#include <stdio.h>

//* question 1 function
float Average(int a,int b, int c)
{
    return (a+b+c)/3.0;
}

//* question 2 function
float CelsiusToFahrenheit(float cel)
{
   return (cel * 1.8)+32;
}

//* question 3 function
 float force( float mass){

     return (mass *9.8);
 }

//* question 4 function
int fibonacci(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

// * question no 6

int Sum_recursion(int n)
{
    if(n==1)
    {
        return 1;
    }
    return Sum_recursion(n-1) + n;

}

// * question no 7 function

void PrintPattern()
{
    // if n=4;
    // *
    // **
    // ***
    // ****
    int n;
    printf("Enter the no of lines\n");
    scanf("%d",&n);
    
    // Run this for loop n times
    for (int i = 0; i < n; i++) // no of lines
    {
        for (int j = 0; j < i + 1; j++) // no of * in line
        {
            printf("*");
        }
        printf("\n");

    }
}

void PrintOddPattern()
{
    // if n=3;
    // *
    // ***
    // *****
    // 1 5 7 9 11 .....

    // odd number generator formula  = (2 * n + 1)
    // (2 x 5 + 1) = 11....
    int n;
    printf("Enter the no of lines\n");
    scanf("%d",&n);
    
    // Run this for loop n times
    for (int i = 0; i < n; i++) // no of lines
    {
        for (int j = 0; j < (2 * i + 1); j++) // no of * in line
        {
            printf("*");
        }
        printf("\n");

    }
}

int main()
{

    // ? Question 1
    // find average of three numbers
    // int a,b,c;
    // printf("Enter 1st no: ");
    // scanf("%d",&a);
    // printf("Enter 2nd no: ");
    // scanf("%d",&b);
    // printf("Enter 3rd no: ");
    // scanf("%d",&c);

    // printf("The average is %.2f\n",Average(a,b,c));

    // ? Question 2
    // convert celsius into fahrenheit
    // formula = (celsius * 1.8)+32;

    // float celsius;
    // printf("Enter the value of celsius\n");
    // scanf("%f",&celsius);
    // printf("The value of %.1f celsius is %.1f fahrenheit\n",celsius,CelsiusToFahrenheit(celsius));

    // ? Question 3
    // calculate force of attraction of user input value due to gravity
    // formula = input * 9.8

    // float mass;
    // printf("Enter the value of mass\n");
    // scanf("%f" , &mass);

    // force() ek function hai
    // aur isme humne mass ki value pass ki hai
    // printf("The force of attraction is %f\n" ,force(mass));

    // ? Question 4
    // write a program to print fibonacci series using recursion to calculate n th element of fibonacci series
    // fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ,55
    // int n;
    // printf("Enter the no sequence of fibonacci series\n");
    // scanf("%d",&n);

    // printf("The fibonacci series is :\n %d\n",fibonacci(n));

    // ? question 5
    // what will be the output of following line
    // int a = 5;
    // printf("%d %d %d\n",a,++a,a++);

    // ? question 6
    // Write a recursion function to calculate the sum of first natural numbers
    // if n = 5; --> 1+2+3+4+5 = 15

    // int n;
    // printf("Enter the first natural number\n");
    // scanf("%d",&n);
    // printf("Total sum is %d\n",Sum_recursion(n));

    // ? Question 7
    // write a program using function to print following star pattern
    // if n = 3;
    // *
    // **
    // ***
    PrintPattern();

    // and second function is
    // if n = 3;
    // *
    // ***
    // *****
    PrintOddPattern();

    return 0;
}