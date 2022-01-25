#include <stdio.h>


void displayArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("The value of element %d is %d\n",i,array[i]);
    }
    array[3] = 999;
}

int main(){

    int array[] = {45,65,76,87,97,32};

    displayArray(array, 6);
    printf("The value of 4th element is %d\n",array[3]);

    return 0;
}