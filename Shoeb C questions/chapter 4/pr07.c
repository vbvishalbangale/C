// make a program to print all prime numbers under 100
// try all loops one by one

#include <stdio.h>

int main(){
//? prime number : wo number jo sirf 1 se aur khud se divide ho

int number = 2;
int isPrime = 1;



for (int i = 1; i <= 100; i++)
{
    while (i<number){

    
    while (i%number == 0)
    {
        printf("%d is prime \n",number);
        number++;
    }
    }
    
}
    
    return 0;
}
