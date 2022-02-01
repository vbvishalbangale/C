// make a program get to numbers input from user and 
// check which number is greater, and print the greater number to the console 
// and if both numbers are equal print both are equal

#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Enter the 1st number\n");
    scanf("%d",&a);
    printf("Enter the 2nd number\n");
    scanf("%d",&b);

    if (a>b)
    {
        printf("first number is greater\n");
    }
    else if (a<b)
    {
        printf("second number greater\n");
    }
    else if (a==b)
    {
        printf("both numbers are equals\n");
    }
    
    

    return 0;
}