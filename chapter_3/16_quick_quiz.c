#include <stdio.h>

int main()
{

    int marks;

    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        // for grade A
        printf("Congrates You Have A grade");
    }
    else if ((marks >= 80) && (marks < 90))
    {

        printf("Congrates You Have B grade");
    }

    else if ((marks >= 70) && (marks < 80))
    {

        printf("Congrates You Have C grade");
    }

    return 0;
}