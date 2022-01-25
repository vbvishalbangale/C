#include <stdio.h>

int main(){

    int marks[5];
    int *pointer;

    //pointer = &marks[0];
    pointer = marks;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d : ",(i+1));
        scanf("%d", pointer);
        pointer++;
    }

    
    for (int i = 0; i < 5; i++)
    {
        
        printf("The marks of student %d is : %d \n",(i+1), marks[i]);
        
    }
    
    return 0;
}