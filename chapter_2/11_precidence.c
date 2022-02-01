#include <stdio.h>

int main(){

    // Operator precidence

    float rahul;


    rahul = 3/3 * 4 +2;
    // bodmas

    float vishal;
    vishal = 3.0 * 3 / 4 +2;
    printf("The value is : %f\n",rahul);
    printf("The value is : %f\n",vishal);



    // note :
    // agar int ko float value daali to wo int me convert ho jati 
    int a = 3.5;
    printf("%d\n",a);

    // agar float ko int value daali to wo float me convert ho jati 
    float b = 5;
    printf("%f\n",b);
    return 0;
}