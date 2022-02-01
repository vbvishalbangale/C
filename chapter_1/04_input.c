#include <stdio.h>

int main()
{

    int number;

    printf("Enter your number: ");
    scanf("%d",&number);

    printf("Your no is %d", number );

// printing the address of variable
// printf("%u",&number);


// keywords : aise words jo c language ne khud ke liye rakhe hai
// in words ko hum variable name ko banane ke liye use nahi kar sakte
// eg., int void; --> //! ye invalid hai

    return 0;
}