#include <stdio.h>
 //? Question 6:
// Write a program containing function which 
// counts the number of positive integers in an array

int CountPosInt(int vb[], int size)
{
    int count= 0;
    for(int i=0;i<size;i++)
    {
        if(vb[i] > 0)
        {
            count++;
        }
    }

    return count;
}

int main(){

    int vb[10];

    for(int i=0;i<10;i++){

        printf("Enter the value of %d element\n",i);
        scanf("%d",&vb[i]);
    }

    int total = CountPosInt(vb,10);

    printf("The total no of positive integers in this array is %d\n",total);
    return 0;
}
 

 