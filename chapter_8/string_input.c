#include <stdio.h>

int main(){

    char name[33];
    printf("Enter your name : ");
    //scanf se string input kiya to space dekh kar wo terminate ho jata hai
    // scanf("%s",name);

    // usse input easy hai
    gets(name);
    printf("Hello Mr, %s", name);
    return 0;
}