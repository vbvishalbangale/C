#include <stdio.h>

// make a function to sum two integers passed by user
int sum(int a,int b){
   int c;
    return c = a+b;
}

int main(){
 
  int a;
  int b;
  int c ;

printf("Enter the first number : ");
scanf("%d",&a);

printf("Enter the second number : ");
scanf("%d",&b);

 printf("The sum is %d\n",sum(a,b));

    
    return 0;
}