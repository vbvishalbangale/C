// Write a program in C to display the pattern like 
// The pattern like :
// if n = 4;

// 1
// 12
// 123
// 1234

#include <stdio.h>

int main(){

    int pattern;

    printf("Enter the number\n");
    scanf("%d",&pattern);
    

    for (int i = 0; i <= pattern; i++) 
    {
        for (int v = 0; v < i; v++)
        {
            printf("%d",v+1);
        }
        printf("\n");
    }
    




    return 0;
}
