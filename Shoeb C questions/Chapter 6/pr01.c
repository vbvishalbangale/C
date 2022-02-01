// make a pointer variable and store another variable address in it and display it
#include <stdio.h>

int main(){

    int a = 10;
    int *b = &a;

    printf("The another variable address is %u\n " , b);

    return 0;
}


