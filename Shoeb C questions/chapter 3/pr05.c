// make a program to check boy age and perform following task
// if age is less than 18 -->  printf("bhai abhi tum chote ho");
// if age is greater than 18 and less than 25 --> printf("Bhai ladki dhundna chalu kardo");
// if age is greater than 25 and less than 30 --> printf("Bhai shaadi karlo");
// if age is greater than 30 and less than 35 --> printf("Kya kar rahe ho bhai");
// if age is greater than 40 --> printf("Bhai khatam tata by by!");

#include <stdio.h>

int main() {
    
    int age;
    printf("Enter your age\n");
    scanf("%d",  &age);

    if (age  <  18)
    {
        printf("bhai abhi tum chote ho");
    }
    else if (age  >  18 && age  <  25)
    {
        printf("Bhai ladki dhundna chalu kardo\n");
    }
    else if (age  >=  25 && age  <=  30)
    {
        printf("Bhai shaadi karlo\n");
    }
    else if (age  >  30 && age  <=  35)
    {
        printf("Kya kar rahe ho bhai\n");
    }
    else if  (age  >  35)
    {
         printf("Bhai khatam tata by by! ");
    }
    return 0;
}