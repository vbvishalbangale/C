// make a function to print multiplication table of given number
#include <stdio.h>

int Multiplication_table(int a){

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",a,i,a*(i));
    }
}


int main(){

    int Number;

    printf("Enter the given number");
    scanf("%d",&Number);

    Multiplication_table(Number);


    return 0;
}