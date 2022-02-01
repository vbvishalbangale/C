// write a program to print multiplication table of given number input by user
// but you have to choice you user how many long it does

#include <stdio.h>

void WahBeteMaujKardi(int num);


int main(){

    int multi;
    int number;
    
    printf("Enter number :\n");
    scanf("%d",&multi);
    
    printf("Enter the how long number :\n");
    scanf("%d",&number);

    WahBeteMaujKardi(multi);

    
    for(int i = 1; i <= number; i++)
    {
        printf("%d X %d = %d\n",multi,i,(multi*i));
    }

    return 0;
}


void WahBeteMaujKardi(int num)
{
    printf("*** The multiplication table of %d is follows ***\n\n",num);
}