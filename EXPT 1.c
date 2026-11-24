#include <stdio.h>

int main()
{
    int a, b, sum, sub, mul;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;

    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);

    return 0;
}
