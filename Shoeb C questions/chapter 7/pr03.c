// make a 5 size of integer array and store its address in another integer pointer 
// and use these pointer to input 


#include <stdio.h>

int main(){

    int store[5];
    int *a;

    a = store;
    // a = &store[0];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value : ",(i+1));
        scanf("%d" ,a);
        a++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d is : %d\n",(i + 1), store[i]);
    }
    


    return 0;
}