#include <stdio.h>

int main(){


    //? break keyword 
    // * isko hum use karte loop se bahar aane ke liye

    //? continue
    // * isko hum use karte next iteration me move karne ke liye

    for(int i=1;i<=100;i++)
    {
        if(i==10){

            // break; //* break dekhte hi wo loop se bahar aajayega
            // ? matlab vasta khatam loop se 
            // ? rishta khatam

            continue; //* wo 10 value ko skip kar dega aur double se run hoga next iteration
            // continue ka matlab yaha se laut jao 
            // dusri baar run hone ke liye
        }
        printf("value = %d\n",i);
    }



    return 0;
}