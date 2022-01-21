#include <stdio.h>

int main()
{

    // C me 2 type ke veriable rahete hai
    // Primitive : int , float , char , double
    // Abhi ke liye ye sab ignore kar --> // Non - primitive : array, pointer , structure

    
    // valid variable names --> int vishal, rahul , number;
    // ? c language is case sensitive : --> matlab int vishal,Vishal; ye dono alag alag hoge

    // int random_number;--> chose meaning ful variable names for our easyness



    // int : -1 , -2 , 0 , 1,  2, 4
    int number = 45;
        number = 100;

    // float : matlab point wale value 45.6 , 454.6
    float point_number = 454.33;

    // char : char store karta hai bas ek single character
    char symbol = 'V';

    // double : use karte hai bada wala point value jaise ki 
    // 545454545.8743747
    double bada_point = 58787473.347837;
    
    // format specifier: matlab compiler ko batana ke is me konsa type ka data aane wala hai
    // int = %d
    // float = %f
    // char = %c
    // double = %lf

    printf("The number is : %d\n",number);
    
    printf("The character is : %c \n ",symbol );

    printf("The float value is : %f \n ",point_number );

    printf("The double value is : %lf \n" , bada_point);

    return 0;
}