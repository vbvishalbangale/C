// input 3 number from user and calculate its average


#include <stdio.h>

int main(){

    int v1,v2,v3;

    printf("The 1st number is : ");
    scanf("%d",&v1);
    printf("The 2nd number is : ");
    scanf("%d",&v2);
    printf("The 3rd number is : ");
    scanf("%d",&v3);

    printf("The Ans is %.2f" ,( v1+v2+v3)/3.0);


    return 0;
}