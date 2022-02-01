#include <stdio.h>
#include <string.h>

struct Student{

    int roll_no;
    int class;
    char name[50];

};

int main(){

    // structure
    // matlab humne hamara custom data type bana liya 
    struct Student s1;
    s1.roll_no = 34;
    s1.class = 12;
    // s1.name = "vishal";  --> ye kaam nahi karega
    strcpy(s1.name, "vishal");

    printf("student name is %s\n", s1.name);
    printf("roll no is %d\n", s1.roll_no);
    printf("class no is %d\n", s1.class);




    return 0;
}