#include <stdio.h>

int main() 
{
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    float subtraction = num1 - num2;
    float product = num1 * num2;
    float division = num1 / num2;

    printf("Addition : %0.2f\n", sum);
    printf("Subtraction: %0.2f\n", subtraction);
    printf("Multiplication: %0.2f\n", product);
    printf("Division: %0.2f\n", division);

    return 0;
}
