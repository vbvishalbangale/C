#include <stdio.h>


// question 2 function
void Print_address(int a){
     printf("The address of a %u\n",&a);
}

// question 3 function
void Change_value(int *i){

    printf("the value after calling function of i is %d\n",(*i)*10);
}

// question 4 function
void sumAndAverage(int a,int b,int *sum, float *avg)
{
    *sum = (a+b);
    *avg = (float)(*sum)/2;
}

// question 6 function

void Change_call_by_value(int i){

    printf("the value after calling function of i is %d\n",i*10);
}


int main(){

    //? question 1 :
    // write a program to print the address of a variable .
    // use this address to get the value of this variable.

    // int a = 10;
    // int *p = &a ;
    // printf("The address of a %u\n" ,&a);
    // printf("The value of a %d", *p);


    //? question 2 :
    // pass this variable to a function and printf its addre. Are these addreses some ? why?
    // Write a program having a variable i. Print the address of i. 

    // int i = 5;
    // printf("The address of i %u\n",&i);
    // Print_address(i);



    //? question 3 :
    // Write porgram to change the value a variable to 10 times.
    // of its current value write function and pass the value by reference

    // int a=10;

    // printf("The value of a before calling function is %d\n",a);
    // Change_value(&a);

    
    //? question 4 :
    // Write program using function which calulate the sum and average 
    // of two number use pointer and print the value of sum and average in main()
 
    // int a = 5;
    // int b = 10;
    // int sum;
    // float avg;

    // sumAndAverage(a,b,&sum,&avg);
    // printf("The sum is %d\n",sum);
    // printf("The average is %.2f\n",avg);

    //? question 5:
    // write a program to print the value of a variable i by using "Pointer to pointer " type of variable
    

    // int a = 5;
    // int *p = &a;
    // int **q = &p;
    

    // printf("The value of a is %d\n", **q);


    //? question 6:
    // try problem 3 using call by value and 
    // verify that is dosent change the value of the said variable
    
    // answer: wo value change nahi karega 
    // main ke variable se utka koi rishta nahi hai
    
    // TODO : iska code mujhe karna hai

    int a=10;

    printf("The value of a before calling function is %d\n",a);
    Change_call_by_value(a);
    printf("The value of a in main is %d\n",a);





    return 0;

}
