#include <stdio.h>

int main(){

    int a=10;
    int *b = &a;

    int **c = &b;
    // ye ek aisa pointer variable hai jo kisi aur pointer ka address store kar sakta
    // pointer to pointer variable hum aise likhate hai

    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",*b);
    printf("The value of c is : %u\n",**c);



 
    return 0;
}