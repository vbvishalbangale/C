// * Exercise :
// TODO: tujhe ek calculator banana hai
// * steps to follow:
//? pehle user se puchna hai konsa operation kar rahe ho batao 
// e,g +,-,*,/ //? isme se koi ek hi perform at a time
// aur user ne jo chose kiya uski base par calculation karke answer display karana hai

//? hint: hum use karege switch case control


#include <stdio.h>

void calculator (){

    
    char symbol;
    int num1 , num2;
    printf("Enter the value of 1st number\n");
    scanf("%d",&num1);
    printf("Enter the value of 2nd number\n");
    scanf("%d",&num2);


    printf("Select operation (+,-,*,/) : \n");
    scanf("%c",&symbol);

 

    switch(symbol)
    {
    case '+':
        printf("The value of %d + %d = %d\n",num1,num2,(num1+num2));
        break;
    case '-':
        printf("The value of %d - %d = %d\n",num1,num2,(num1-num2));
        break;
    case '*':
        printf("The value of %d * %d = %d\n",num1,num2,(num1*num2));
        break;
    case '/':
        printf("The value of %d / %d = %d\n",num1,num2,(num1/num2));
        break;
    default:
        printf("Invalid Operation please try again!\n");
        break;
    }

    
}



int main(){

     calculator();

    
    
    return 0;
}