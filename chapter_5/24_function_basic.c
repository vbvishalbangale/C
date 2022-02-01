#include <stdio.h>


void display(); // Function Prototype --> //? matlab compiler ko batana kya hum konsa function banane wale hai


int main(){

display(); // function call --> //? jitne baar call karege utni baar uske andar ka code execute hoga
display();
display();
display();
display();
    
    return 0;
}

void display(){ // Function definition --> //? matlab actual fuction me kya aane wala hai wo code isme likhege 

    printf("vishal\n");
}
