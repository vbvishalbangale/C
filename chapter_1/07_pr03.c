#include <stdio.h>

int main(){

    // Q. convert celsius to fahrenheit
    // 0 celsius = 32 fahrenheit
    int celsius=33;
    printf("Enter the value of celsius : ");
    scanf("%d",&celsius);

    float vishal = (celsius * 1.8) + 32;

    printf("The value of %d celsius is = %f fahrenheit\n", celsius,vishal);
    return 0;
}