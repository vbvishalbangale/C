// write a program to print the days of week 
// like when user input 1 number print sunday 
// if user input 2 number print monday and so on...

#include <stdio.h>

int main(){

    int day;
    
    printf("Enter your number : ");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("your day is sunday\n");
        break;
    case 2:
        printf("your day is monday\n");
        break;
    case 3:
        printf("your day is tuesday\n");
        break;
    case 4:
        printf("your day is wednesday\n");
        break;
    case 5:
        printf("your day is Thursday\n");
        break;
    case 6:
        printf("your day is friday\n");
        break;
    
    case 7:
        printf("your number is saturday\n");
        break;

    default:
        printf("your number is invalid\n");
        break;
    }
    
    
    return 0;
} 