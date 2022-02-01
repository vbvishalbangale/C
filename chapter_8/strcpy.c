#include <stdio.h>
#include <string.h>

int main(){

    // strcpy = string copy function 
    //* strcpy ko hum use karte right wale string ko left wale me copy karne ke liye

    char book1[] = "Java Programming";
    char book2[30];

    strcpy(book2, book1);
    printf("The book 2 is %s\n", book2);


    // quick quiz: 
    // make 2 string and copy one into another

    char student1[] = "fybca student";
    char student2[30];

    strcpy(student2, student1);
    printf("The student of class is %s\n" ,student2);

    return 0;
}
 