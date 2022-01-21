#include <stdio.h>

int main()
{

    // ? question 1
    // int a =10;
    // if(a>=9){
    //     printf("shoeb accha hai na");
    //  }
    // else{
    //     printf("hiii shoeb");

    // }

    // ? question 2

    // int mark1,mark2,mark3;
    // float percentage;

    // printf("Enter your 1 subject marks\n");
    // scanf("%d", &mark1);
    // printf("Enter your 2 subject marks\n");
    // scanf("%d", &mark2);
    // printf("Enter your 3 subject marks\n");
    // scanf("%d", &mark3);

    // percentage = (mark1 + mark2 + mark3) / 3.0;

    // if ((percentage <= 40 ) || mark1 < 33 || mark2 < 33 || mark3 < 33)
    // {
    //     // student ho jayega fail
    //     printf("Your percentage is %.2f%% and you are failed", percentage);
    // }

    // else if (percentage <= 100)
    // {
    //     if (percentage >= 95 && percentage <= 100)
    //     {
    //         printf("Bro! Your Topper\n");
    //     }
    //     printf("Your percentage is %.2f%% and you are pass", percentage);
    // }

    // else{
    //     printf("Invalid Marks Please enter valid marks");
    // }


    // ? Question 3

    // float income;
    // float tax = 0; // ? garbage value se bachne ke liye hum variable ko 0 se asign karte hai

    // printf("Enter your annual income to calculate tax\n");
    // scanf("%f",&income);

    // if((income >= 250000) && (income<=500000))
    // {
    //     tax += (income - 250000) * 0.05;

    //     //? ye dono line same hai
    //     // tax +=
    //     // tax = tax +
    // }
    
    // if((income > 500000) && (income <= 1000000))
    // {
    //     tax += (income - 250000) * 0.20;
    // }
    // if (income > 1000000)
    // {
    //     tax += (income - 250000) * 0.30;
    // }

    // printf("Your annual tax is : %f\n", tax);


    // ? Question 4

    // leap year feb 29 days rahete aur 4 saal me ek baar aata

    // int year;// initialize variable

    // printf("Enter the year : \n"); // user ko puch print karke
    // scanf("%d",&year); // input liya user se scanf se

    // if(year % 4  == 0)
    // {
    //     printf("%d is leap year",year);
    // }
    // else{
    //     printf("%d is not a leap year",year);
    // }


    // Question no 5
    // to check entered character lowercase or note

    // char character;
    // printf("Enter the character\n");
    // scanf("%c",&character);

    //condition?
    // a - z 
    // 97 - 122
    // to humko check karna hai agar value 97 se 122 rahi 
    // to wo lowercase character hai
    // agar nahi hai matlab wo uppercase hai

    // a , b , d, ---> lowercase
    // A, S, V, C ----> uppercase

    // if (character >=97 && character <=122){
    //     printf("%c is lowercase character\n " , character);

    // }
    // else{
    //     printf("%c is Not lowercase character\n",character);        
    // }

   
   // ? Question no 6 
   // program likhna hai 
   // 4 numbers alag input lene hai user se
   // aur last me batana hai inme se kon sa sabse bada hai

   int n1, n2 , n3 , n4;

   printf("Enter the number 1 \n : ");
   scanf("%d" , &n1);

   printf("Enter the number 2 \n : ");
   scanf("%d" , &n2);

   printf("Enter the number 3 \n : ");
   scanf("%d" , &n3);

   printf("Enter the number 4 \n : ");
   scanf("%d" , &n4);


   if(n1 > n2 && n1 > n3 && n1 > n4)
   {
       printf("Number 1 is greater");
   }

    else if(n2 > n3 && n2 > n4 && n2 > n1)
   {
       printf("Number 2 is greater");
   }

    else if(n3 > n1 && n3 > n2 && n3 > n4)
   {
       printf("Number 3 is greater");
   }

    else if(n4 > n3 && n4 > n2 && n4 > n1)
   {
       printf("Number 4 is greater");
   }


  
 return 0;
}

