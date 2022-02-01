#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char class[20];
    char name[50];
};

int main(){

    struct student vishal;

    printf("Enter your roll no : \n");
    scanf("%d", &vishal.roll_no);
    printf("Enter your class : \n");
    scanf("%s", &vishal.class);
    printf("Enter your name :\n");
    scanf("%s", &vishal.name);

    printf("Your name is : %s\n",vishal.name);
    printf("Your roll no is : %d\n",vishal.roll_no);
    printf("Your class is : %s\n",vishal.class);
    
    struct student gaurav;

    printf("Enter your roll no : \n");
    scanf("%d", &gaurav.roll_no);
    printf("Enter your class : \n");
    scanf("%s", &gaurav.class);
    printf("Enter your name :\n");
    scanf("%s", &gaurav.name);

    printf("Your name is : %s\n",gaurav.name);
    printf("Your roll no is : %d\n",gaurav.roll_no);
    printf("Your class is : %s\n",gaurav.class);

    return 0;
}



