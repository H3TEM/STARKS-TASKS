#include <stdio.h>

int Factorial(int *num) {
    int f = 1;
    for (int i = 1; i <= *num; i++) {
        f *= i;
    }

    return f;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int result = Factorial(&number);
    printf("Factorial of %d = %d\n", number, result);

    return 0;
}