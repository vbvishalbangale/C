#include <stdio.h>

int main(){

    int no_of_students = 6;
    int no_of_subjects = 3;

    int marks [no_of_students][no_of_subjects];

    for (int i = 0; i < no_of_students; i++)
    {
        for (int j = 0; j< no_of_subjects; j++)
        {
            printf("Enter the marks of student %d\n",i+1);
            printf("In subject %d : ",j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    for (int i = 0; i < no_of_students; i++)
    {
        for ( int j  = 0; j < no_of_subjects; j++)
        {
            printf("The marks of student %d is in subject %d is : %d\n ", i+1 , j+1, marks[i][j]);
        }
        
    }
    

    return 0;
}