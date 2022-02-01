//find the user input number is positive , negative or zero

// 0 se bada --> positive
// 0 se chota --> negative
// 0 to zero hi hai

#include <stdio.h>

int main(){

    int a;

    printf("Enter the number\n");
    scanf("%d",&a);

    if (a > 0)
    {
       //positive condition
        printf("your number is positive\n");
    }
    else if (0 > a)
    {
        printf("your number is negative\n");
    }
    else if(a == 0){
        printf("your number is zero\n");  
    }

    return 0;
}
















