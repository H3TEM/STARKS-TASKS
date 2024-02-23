#include <stdio.h>

void sdp(int num1,int num2,int *sum,int *difference,int *product) {
    *sum = num1 + num2;
    *difference = num1 - num2;
    *product = num1 * num2;
}

int main() {
    int number1,number2,sum,difference,product;
    printf("Enter the first number: ");
    scanf("%d",&number1);
    printf("Enter the second number: ");
    scanf("%d",&number2);
    sdp(number1,number2,&sum,&difference,&product);
    printf("Sum = %d\n",sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}
