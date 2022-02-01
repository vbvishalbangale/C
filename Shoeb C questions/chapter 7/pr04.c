// make a 2d array and get your friend roll no and fy marks as an input 


#include <stdio.h>

int main(){

    int friend[4][2];

    for (int i = 0; i < 4;i++)
    {
        printf("I am friend no : %d\n",(i+1));

        for(int k = 0;k<2;k++)
        {
            printf("Enter your %d favorite no : ",(k+1));
            scanf("%d", &friend[i][k]);
        }
    }
    for (int i = 0; i < 4;i++)
    {
        for(int k = 0;k<2;k++)
        {
           printf("I am friend no %d of vishal\n",(i+1));
           printf("My %d favorite no is : %d\n",(k+1),friend[i][k]);

        }
    }

        return 0;
}

