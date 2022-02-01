#include <stdio.h>
#include <string.h>

typedef struct student{
    int roll;
    char name[34];
}vishal;


void Display(vishal s1)
{
    printf("The roll no of student is %d\n",s1.roll);
    printf("The name of student is %s\n", s1.name);
}



int main(){

    // typedef keyword se hum structure ko dusre naam se bhi pukaar sakte
    // struct student v1;
    vishal v1;
    v1.roll = 34;
    strcpy(v1.name, "vishal");

    Display(v1);

    return 0;
}