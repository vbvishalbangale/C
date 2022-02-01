// ? Write a function sum vector which returns the sum of two vectors passed to it 
//  the vector must be two dimensional
#include <stdio.h>

struct vector {
    int x;
    int y;
};

struct vector vectorSum(struct vector v1,struct vector v2)
{
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}

int main(){

    struct vector v1,v2,sum;
    
    v1.x = 5;
    v1.y = 10;

    printf("The X dimension is %d\n",v1.x);
    printf("The Y dimension is %d\n",v1.y);
    
    v2.x = 5;
    v2.y = 10;

    printf("The X dimension is %d\n",v2.x);
    printf("The Y dimension is %d\n",v2.y);

    sum = vectorSum(v1, v2);

    printf("The X - dimension sum is : %d\n",sum.x);
    printf("The Y - dimension sum is : %d\n",sum.y);

    return 0;
}