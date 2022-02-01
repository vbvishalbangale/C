// Write a program to illustrate the use of arrow operator -> in c

#include <stdio.h>

typedef struct student{

    int roll;


}student;



int main(){

    student s1;

    // s1 ko access karne ke do ways hai
    // 1st way is . (dot operator) --> s1.roll = 44;
    // 2nd way is -> (arrow operator) --> s1->roll = 44;

    student *ptr;
    ptr = &s1;

    // s1.roll = 44;
    ptr->roll = 44;

    printf("The roll no is : %d\n", ptr->roll);

    return 0;
}