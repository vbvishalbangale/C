#include <stdio.h>


int sum(int a,int b)
{
    a = 33333;
    b = 44444;
    return (a+b);
}

int main(){

    int a = 3;
    int b = 4;

    int c = sum(a,b); // ye hai call by value isme jo value dete hai wo copy hoke function me jati hai
    // isliye agar humne sum ke a aur b ko change bhi kar diya to main function ke a aur b ko 
    // kuch fark nahi padega

    printf("the sum is %d\n",c);
    printf("the value of a %d\n",a);
    printf("the value of b %d\n",b);
    printf("the sum of a and b is %d\n",(a+b));

    
    return 0;
}