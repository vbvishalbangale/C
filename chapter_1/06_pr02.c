#include <stdio.h>

int main(){

    // circle area = Pi * r * r
    // cylinder volume = Pi * r * r * h //?(h for height , r for radius)
    float PI = 3.14159265;
    float radius;
    float height;
    printf("Enter the radius of circle : \n");
    scanf("%f",&radius);
    printf("Enter the height of height : \n");
    scanf("%f",&height);
    


    printf("The area of circle is : %f\n", PI * (radius* radius));
    printf("The volume of cylinder is : %f", PI * (radius* radius) * height);
    // int aur float ka operation = float value answer

    return 0;
}