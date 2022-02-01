// print 1 to 1000 numbers but break the loop on 99 number


#include <stdio.h>

int main(){

    int number =  1;

    for (int i = 1; i < 1000; i++)
    {
        printf("The natural number is %d\n", i);
         
         if (i==99)
         {
            break;
         }
         
    }

        
    
    

    return 0;
}