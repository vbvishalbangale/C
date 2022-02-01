#include <stdio.h>
#include <string.h>


int main(){

    // strcmp matlap string compare iska matlab

    // strcmp : isko hum do string ko compare karne ki liye karte hai

    // agar string value same hai to 0 ya koi bhi positive value return karega
    // agar string value same nahi to -1 return karega

    char v1[] = "Hello";
    char v2[] = "hello";

    int value = strcmp(v1,v2);

    printf("The value is %d \n", value);

    //quick quiz : make 2 strings and compare them

    char s1[] = "gourav";
    char s2[] = "Gourav";

    int name = strcmp(s1, s2);

    printf("The value name is %d \n", name);

    return 0;
}