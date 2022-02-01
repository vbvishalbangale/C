#include <stdio.h>
#include <string.h>

int main(){

    //* strlen function apne ko string ka length return karta hai 
    //note : ye function string me blank spaces bhi count karta hai
    

    char name[30] = "gaurav deore";
    int size = strlen(name);
    printf("The size of name string is %d\n",size);

    // quick quiz : with help of strlen function to check its length

    char assasian[100] = "Ezio auditore da firenze";
    int length = strlen(assasian);

    printf("The assasian name string length is %d\n", length);

    return 0;
}