#include <stdio.h>
//#define float PI = 3.14;
int main()
{

    // constant :
    // constant ek aisa variable hai jiski value hum program ke 
    // execution ke bhich change nahi kar sakte
    // ! note : but variable ki kar sakte hai 

    const float PI = 3.14;
    int num = 2323;
    //PI = 44.44;
    printf("The value of pi is : %f\n\n\n",PI);
    printf("The value of num is : %d",num);
    return 0;
}