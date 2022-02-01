#include <stdio.h>
#include <string.h>


struct employee
{
    int id;
    float salary;
    char name[40];
};

int main(){

    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    (*ptr).id = 1;
    (*ptr).salary = 10000;
    strcpy((*ptr).name, "vishal");

    printf("The name is %s\n", e1.name);
    printf("The id is %d\n", e1.id);
    printf("The salary is %f\n", e1.salary);

    return 0;
}