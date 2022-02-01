#include <stdio.h>
#include <string.h>

int main(){


    //? strcat ko hum do string ko jodne ke liye karte hai

    // strcat hum do string ko milane ke liye karte hai
    // right wali string left wali me add ho jati hai


    // char s1[]= "Hello ";
    // char s2[]= "vishal";

    // strcat(s1,s2);
    // printf("%s", s1);


    //quick quiz : create 2 string and use strcat to concatinate them

    char f1[] = "Hello";
    char f2[] = " gourya";

    strcat(f1, f2);
    printf("%s\n", f1);

    return 0;
}