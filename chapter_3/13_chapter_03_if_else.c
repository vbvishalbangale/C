#include <stdio.h>

int main(){

    // ! note : = use karte hai value add karne ke liye
    // ?  aur == use karte compare karne ke liye

    int age;
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    // Relational operators

    // == se bas ek hi value check karega
    // != se condition ko ulta karta hai
    // < : ye check karta hai value usse kam honi chahiye
    // <= : ye check karta hai value equal ya esse kam ho 
    // > : ye check karta hai value usse jyada honi chahiye
    // >= : ye check karta hai value equal ya usse jyada honi chahiye


    // Logical Operators
    // && (logical and) operator : ? is ko chahiye dono condition true tab hi answer true aayega
    // || (logical or) operator : ? is ko chahiye koi bhi ek condition true
    // ! (logical not) operator : ? ye andar ke logic ko ulta karta hai

    if(age >= 18){
        // agar condition true hai 
        // to if ke andar ka masala execute hoga
        printf("Me 18 saal ka ya usse bada hu");
    }
    else{
        // agar condition false hai 
        // to else ke andar ka masala execute hoga
        printf("Me 18 saal ka nahi hu");
    }


    return 0;
}