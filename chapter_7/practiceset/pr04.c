#include <stdio.h>

int main(){

    //? Question 4:
    // Repeat problem 3 for a general input provided by the user using scanf

    int vb[10];
    int cv;

    printf("Enter the number\n");
    scanf("%d",&cv);

    for (int i = 0; i < 10; i++)
    {
        vb[i] =  cv * (i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n" ,cv,(i+1),vb[i]);
    }


    return 0;

}