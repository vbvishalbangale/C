#include <stdio.h>

// ? make 1st function to get input user roll no and return it 
// ? make 2nd to input user 3 subject marks and calculate its percentage

int Roll_no()
{
    int a;
    printf("Enter your roll no : ");
    scanf("%d",&a);

    return a;
}

void Percentage()
{
    int m1,m2,m3;
    int roll = Roll_no();
    printf("Enter your first subject marks: ");
    scanf("%d",&m1);
    printf("Enter your second subject marks: ");
    scanf("%d",&m2);
    printf("Enter your third subject marks: ");
    scanf("%d",&m3);
    float percentage = (m1+m2+m3)/3.0;

    if(percentage < 35 || m1 < 35 || m2 < 35 || m3 <35)
    {
        printf("your roll no is %d\n",roll);
        printf("Sorry your percentage is %.2f and you are failed\n",percentage);
        
    }
    else{
        printf("your roll no is %d\n",roll);
        printf("Congrates! your percentage is %.2f%% and you are pass\n",percentage);
    }

}


int main(){

    Percentage();

    
    return 0;
}

