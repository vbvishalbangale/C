#include <stdio.h>
#include <math.h> // isse hum mathematical functions use kar sakte hai

// square area = side square

int SquareArea(int n)
{
    int c = (int)pow(n,2);
    return c;
}

int main(){

    // use the library function to calculate the area of square with side a
    int num;
    printf("Enter the square side value : ");
    scanf("%d",&num);
    // SquareArea(num);

    printf("The value of square area is %d\n",SquareArea(num));

    
    return 0;
}