#include <stdio.h>

int main(){

    // 3 items purchase karne hai
    // and unke price input leke total amount calculate karne user ko bata deni hai
    
    int item1;
    int item2;
    int item3;

    printf("Enter the price of item 1 : ");
    scanf("%d",&item1);
    printf("Enter the price of item 2 : ");
    scanf("%d",&item2);
    printf("Enter the price of item 3 : ");
    scanf("%d",&item3);
    
    printf("The total is : %d" ,(item1+item2+item3));

    
    return 0;
}