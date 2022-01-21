#include <stdio.h>

int main(){

    // rectangle formula = height * width(breath);
    int height, width;
    printf("Enter the value of height: ");
    scanf("%d", &height);
    printf("Enter the value of width: ");
    scanf("%d", &width);


    printf("The value of Rectangle area is : %d " ,height*width);
    return 0;
}