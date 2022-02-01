// make a structure to print  DD/MM/YY HH/MM/SS (24 hour format)

// quick quiz : make this program for user input values

#include <stdio.h>

typedef struct date_time
{
    // variables for set date
    int date;
    int month;
    int year;

    // variables for set time
    int hour;
    int minute;
    int second;
} date_time;

void display(date_time d){

    printf("Today date is : %d/%d/%d\n", d.date, d.month, d.year);
    printf("Current time is : %d:%d:%d\n", d.hour, d.minute, d.second);
}

int main(){

    date_time date;

    date.date = 1;
    date.month = 2;
    date.year = 2022;

    date.hour = 7;
    date.minute = 49;
    date.second = 5;

    display(date);

    return 0;
}