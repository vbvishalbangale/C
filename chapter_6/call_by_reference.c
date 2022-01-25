#include <stdio.h>

void swap_call_by_value(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_call_by_reference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a = 3;
    int b = 4;
    printf("The value of a before calling function is %d\n",a);
    printf("The value of b before calling function is %d\n",b);

    // swap_call_by_value(a,b); // value nahi badli kyoki ye call by value
    swap_call_by_reference(&a,&b); // value badli kyoki ye call by reference hai
    printf("The value of a after calling function is %d\n",a);
    printf("The value of b after calling function is %d\n",b);

   return 0;
}