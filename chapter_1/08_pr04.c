#include <stdio.h>

int main(){

    // formula = P × R × T/ 100


    // int principal=100 , rate=4, years=1;
    // int simpleInterest = (principal * rate * years)/100;
    // printf("The value of simple Interest is %d", simpleInterest);

    float principalAmount;
    int rate = 4;
    int time_year = 1;
    printf("Batao kitna udhar chahiye: ");
    scanf("%f",&principalAmount);

    float final =(principalAmount * rate * time_year)/100 ;
  
    printf("Chal de re baba paisa la : %f", final+principalAmount);


    
    return 0;
}