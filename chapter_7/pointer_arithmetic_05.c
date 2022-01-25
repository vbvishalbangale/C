#include <stdio.h>

int main(){

    int a = 7; //? interger 4 bytes leta majority systems me (may be 2 byte some systems)
    int *pointer = &a;
    printf("The address is %u\n", pointer);
    // pointer++;

    //? jitne baar ++ ya +1 kiya address badhta jayega yaha par int hai to 4 byte se badhega address;
    pointer = pointer - 1;
    // pointer = pointer + 1;
    printf("The address is %u\n", pointer);



    char ch = 'v'; //? note : character 1 byte memory leta hai
    char *ch_ptr = &ch;
    printf("The address of ch is %u\n", ch_ptr);
    // ch_ptr++;
    ch_ptr = ch_ptr + 1;
    printf("The address of ch is %u\n", ch_ptr);



    return 0;
}