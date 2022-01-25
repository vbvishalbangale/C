#include <stdio.h>

int main(){

    int s = 10;
    int *v = &s;

    printf("The address of s is %u\n", v);
    v++;
    printf("The address of s is %u\n", v);
    v--;
    printf("The address of s is %u\n", v);


    return 0;
}