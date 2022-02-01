#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    char name[34];
};


void Display(struct student s1)
{
    printf("The roll no of student is %d\n",s1.roll);
    printf("The name of student is %s\n", s1.name);
}



int main(){

    struct student v1;
    v1.roll = 34;
    strcpy(v1.name, "vishal");

    Display(v1);

    return 0;
}