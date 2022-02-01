// make a function for student 
// get user input of 3 subjects out of 100
// and calculate its percentage and display student is pass or fail
// minimum pass requirement is total percentage >= 40 and every subject atleast 35 marks
#include <stdio.h>

void percentage(int s1,int s2,int s3){

    float percentage;
    percentage = (s1 + s2 + s3) / (3.0);
    printf("The total percentage is %.2f\n",percentage);

   
    if (percentage>=40 && s1>=35 && s2>=35 && s3>=35)
    {
        printf("You are pass!\n");
    }
    else{
        printf("You are fail!\n");
    }

}



int main(){

    int Subject_1;
    int Subject_2;
    int Subject_3;


    printf("Enter the first subject marks : ");
    scanf("%d",&Subject_1);

    printf("Enter the second subject marks : ");
    scanf("%d",&Subject_2);

    printf("Enter the third subject marks : ");
    scanf("%d",&Subject_3);
    
    percentage(Subject_1,Subject_2,Subject_3);
    
    
    return 0;



}