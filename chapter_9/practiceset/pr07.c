// Solve problem 5 using typedef keyword

typedef struct complex
{
    int x;
    int y;
} complex;

int main()
{

    complex number;
    number.x = 10;
    number.y = 20;

    printf("The complex number is : %d + %di\n", number.x, number.y);

    return 0;
}