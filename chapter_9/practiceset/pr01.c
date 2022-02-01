//? Create a two dimensional vector using structures in c

#include <stdio.h>


struct vector{
    int x;
    int y;
};

int main()
{
    struct vector v1;
    v1.x = 4;
    v1.y = 9;

    printf("The X dimension is %d\n", v1.x);
    printf("The Y dimension is %d\n",v1.y);


    return 0;
}