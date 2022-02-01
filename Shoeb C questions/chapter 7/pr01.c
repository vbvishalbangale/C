// make a float type of array size 5 anf input 5 student marks anf fisplay
// fon't use loops ok!

#include <stdio.h>

int main(){

    float student[5];

    printf("Enter the marks of student 1 : ");
    scanf("%f", &student[0]);

    printf("Enter the marks of student 2 : ");
    scanf("%f", &student[1]);

    printf("Enter the marks of student 3 : ");
    scanf("%f", &student[2]);

    printf("Enter the marks of student 4 : ");
    scanf("%f", &student[3]);

    printf("Enter the marks of student 5 : ");
    scanf("%f", &student[4]);

    printf("The 1st student marks is : %f\n", student[0]);
    printf("The 2st student marks is : %f\n", student[1]);
    printf("The 3st student marks is : %f\n", student[2]);
    printf("The 4st student marks is : %f\n", student[3]);
    printf("The 5st student marks is : %f\n", student[4]);
    return 0;
}