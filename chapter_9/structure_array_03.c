#include <stdio.h>
#include <string.h>

//abhi humko ek structure banana hai employee

struct employee
{
    int id;
    float salary;
    char name[40];
};


int main(){

// ye hai array of structure
// humne 100 size ka wp array bana liya

    struct employee wp[100];

    wp[0].id = 1;
    wp[0].salary = 10000;
    strcpy(wp[0].name, "vishal");

    wp[1].id = 2;
    wp[1].salary = 14000;
    strcpy(wp[1].name, "gaurav");

    wp[2].id = 3;
    wp[2].salary = 5999;
    strcpy(wp[2].name, "shoeb");

    printf("The id no %d is %s and its salary is %f\n",wp[0].id,wp[0].name,wp[0].salary);
    printf("The id no %d is %s and its salary is %f\n",wp[1].id,wp[1].name,wp[1].salary); 
    printf("The id no %d is %s and its salary is %f\n", wp[2].id, wp[2].name, wp[2].salary);

    return 0;
}