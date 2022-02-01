#include <stdio.h>

// make a function to input student roll number and display it




void student(){

    int student1;
    printf("Enter roll number \n");
    scanf("%d", &student1);

    printf("your roll is %d", student1);
}



int main(){

    student();

    return 0;
}