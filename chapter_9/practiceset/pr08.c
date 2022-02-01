#include <stdio.h>
#include <string.h>
// Create a structure representing a bank account 
//  of a customer what fields did you use and why ?

typedef struct Bank
{
    long account_number;
    float amount;
    char name[100]; // agar char array raha to %s use karte hai kyoki character array matlab string hota hai

} Bank ;

void display(Bank b)
{
    printf("Your name is : %s\n", b.name);
    printf("Your account number is %d\n:", b.account_number);
    printf("Your amount is : %f\n ", b.amount);
}

int main(){

    Bank ac1;

    printf("Enter your name : ");
    // scanf("%s",ac1.name);
    gets(ac1.name);

    printf("Enter the account number : ");
    scanf("%d", &ac1.account_number);
   
    printf("Enter the amount : ");
    scanf("%f", &ac1.amount);

    display(ac1);
    return 0;
}