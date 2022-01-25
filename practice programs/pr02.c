#include <stdio.h>

//make 2 function 
// function 1 is for printing n even number
// function 2 is for printing n odd number

//? user jo input dega to 0 se us number tak even ya odd number print karne hai


void Print_Even()
{
    int n;
    int count = 0;
    printf("Enter the number\n");
    scanf("%d",&n);

    printf("The even numbers are:\n");

    for (int i = 0; i <= n; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n",i); //printing even numbers
            count++; // ye count ki value 1 se badhata rahega
        }
    }
    printf("The total no of even numbers are %d\n",count);
}


void Print_Odd()
{
    int n;
    int count = 0;
    printf("Enter the number\n");
    scanf("%d",&n);

    printf("The odd numbers are:\n");

    for (int i = 0; i <= n; i++)
    {
        // if (i%2 != 0) //? ye condition bhi use kar sakte hai hum
        if (i%2 == 1)
        {
            printf("%d\n",i); //printing odd numbers
            count++; // ye count ki value 1 se badhata rahega
        }
    }
    printf("The total no of odd numbers are %d\n",count);
}


int main(){

// Print_Even();



  Print_Odd();
    
    




    return 0;
}