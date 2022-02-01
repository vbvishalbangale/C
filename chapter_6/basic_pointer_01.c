#include <stdio.h>

int main(){

    int a = 10;

    //   declaring pointer variable
    int *b = &a;
    //   int is 4 bytes

    // //? note: %u use for printing address

    // printf("The value of a is %d\n",a);
    printf("The address of a is %u\n",&a);
    printf("The address of a is in b %u\n",b);
    printf("The value at address of a %u\n",*b); //* ( * ) laga diya to ab wo us address ki value print value karega
    printf("The address b is %u\n",&b);
    // printf("The value at address b is %u\n",*(&b));
    
    return 0;
}