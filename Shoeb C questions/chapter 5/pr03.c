#include <stdio.h>

// get user input height and width 
// make a function to calculate the area of rectangle
// formula = (height * width)

int height_width();
int main(){

    int a;
    int b;

    printf("Enter the height value \n:");
    scanf("%d",&a);

    printf("Enter the width value\n");
    scanf("%d",&b);
    
    printf("The area of rectangle %d\n",height_width(a,b));
    
    
    return 0;
}   
    
int height_width(int a,int b){

    int total;
    total = a*b;
    return total;

}