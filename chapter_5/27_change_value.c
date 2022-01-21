#include <stdio.h>


int Change(int num)
{
    num = 444;
    return 0;
}

int main(){

    int num = 100;

    printf("The value of num before Change function runing is %d\n",num);
    Change(num);
    printf("The value of num after Change function runing is %d\n",num);

    return 0;

}
