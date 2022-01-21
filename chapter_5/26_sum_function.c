#include <stdio.h>

float vishal(int a,float b); // function prototype

int main(){

    int a=4;
    float b= 4.6;
    float c;
    
    c = vishal(a,b); // function call //a and b hai inko bolte arguments
    printf("The value of sum is %.1f\n",c);
    return 0;
}

float vishal(int a, float b) // a and b hai isko bolte parameters
{
    float c;
    c = a + b;
    return c;
}
      