
#include <stdio.h>

struct employee
{
    int id;
    float salary;
    char name[40];
};

int main(){

    // ham is tarah bhi structure ko initialize kar sakte hai

    struct employee e1 = {1, 50000, "vishal"};

    printf("The name is %s\n", e1.name);
    printf("The id is %d\n", e1.id);
    printf("The salary is %f\n", e1.salary);

    return 0;
}