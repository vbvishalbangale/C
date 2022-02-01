#include <stdio.h>

// print first 100 even numbers using loops
// 2,4,6,8...

int main(){

    int count=0;


    for (int i = 0; count < 100; i++)
    {
        if(i%2==0){
            printf("The even number is %d\n",i);
            count++;
        }
    }

    printf("The total number of even is %d\n",count);
    




    
    return 0;
}