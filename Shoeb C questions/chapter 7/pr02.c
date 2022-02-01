// make a int type of array size 10 and input 10 student marks and display
// use loops ok!



#include <stdio.h>

int main(){

    int Student[10];


    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks of student no %d : ",(i+1));
        scanf("%d", &Student[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("The marks of student no %d is : %d\n", (i+1),Student[i]);
    }
        


    

    return 0;
}