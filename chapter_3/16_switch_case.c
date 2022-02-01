#include <stdio.h>

int main(){

    int starRating;

    printf("Enter your rating out of 5 stars\n");
    scanf("%d",&starRating);

// switch case me only integer ya character le sakte hai
// ! float nahi le sakte

    switch(starRating)
    {
        case 1:
        printf("You select 1 star rating\n");
        break;

        case 2:
        printf("You select 2 star rating\n");
        break;

        case 3:
        printf("You select 3 star rating\n");
        break;

        case 4:
        printf("You select 4 star rating\n");
        break;

        case 5:
        printf("You select 5 star rating\n");
        break;

        default:
        printf("Invalid rating");
    }

    // ! Char ke saath bhi use kar sakte hai switch ko 
    // char vishal = 'v';

    // switch(vishal)
    // {
    
    //  case 'v':
    //     printf("yes i am vishal\n");
    //     break;

    // case 'V':
    //     printf("Yes i am big vishal");
    //     break;

    //     default:
    //     printf("No i am not vishal");
    //     break;
    // }
    
    return 0;
}