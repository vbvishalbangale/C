// write a program to print multiplication table in reverse order
#include <stdio.h>

void table()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",n,(i+1),n*(i+1));
    }
    
}

int main(){

    int Table;

    printf("Enter your multiplication table number : ");
    scanf("%d",&Table);
     
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n",Table,i,(i*Table));
    }
    
    table();
     
    return 0;
}