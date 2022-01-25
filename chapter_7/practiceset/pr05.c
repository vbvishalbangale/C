 //? Question 5:
 // Write a program containing a function which reverses the array passed to it 

    
void ReverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < (size/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    
}

#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};

    ReverseArray(arr,9);

    for(int i=0;i<9;i++){
        printf("The value of element %d is : %d\n", i, arr[i]);
    }

    
    return 0;
}