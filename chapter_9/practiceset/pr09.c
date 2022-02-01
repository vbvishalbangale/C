// Write a structure capable of storing date write a function to compare those dates 

#include <stdio.h>


typedef struct date
{
    // DD/MM/YY
    int day;
    int month;
    int year;
}date;


void displayDate(date d1)
{
    printf("The date is : %d/%d/%d\n", d1.day, d1.month, d1.year);
}

int CompareDate(date d1,date d2)
{
    if(d1.year > d2.year)
    {
        return 1;
    }
    if(d1.year < d2.year)
    {
        return -1;
    }
    if(d1.month > d2.month)
    {
        return 1;
    }
    if(d1.month < d2.month)
    {
        return -1;
    }
    if(d1.day > d2.day)
    {
        return 1;
    }
    if(d1.day < d2.day)
    {
        return -1;
    }

    return 0;
}

void Result(int result)
{
    if(result > 0)
    {
        printf("Date 1 is Bigger!\n");
    }
    if(result < 0)
    {
        printf("Date 2 is Bigger!\n");
    }
    if (result == 0 ){
        printf("Both date is same\n");
    }
}

int main(){

    date d1 = {12,3,2022};
    // d1.day = 12;
    // d1.month = 3;
    // d1.year = 2022;

    date d2 = {12,3,2022};

    displayDate(d1);
    displayDate(d2);

    int result = CompareDate(d1,d2);

    Result(result);

    return 0;
}   