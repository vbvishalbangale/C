#include <stdio.h>

int main(){

    int age;
     printf("Enter your age\n: ");
     scanf("%d",&age);


    // ! if else jo hai ek dusre mile hue hai 
    // ? matlab if execute nahi hua to else excute hona hona hi hona hai


    // note : if else ladder me koi bhi ek hi condition true hokar terminate ho jayegi


     if(age==10){
     printf("Your age is 10");
         
     }
     else if(age == 50)
     {
         printf("Your age is 50");
     }
     else if(age==20)
     {
         printf("Your age is 20");
     }
     else if(age == 30)
     {
         printf("Your age is 30");
     }
     else if(age==40)
     {
         printf("Your age is 40");
     }
     
     else{
     printf("You are not eligible");   
     }


     // fir aage ka code run hoga

     printf("Hello");
     
    return 0;
}