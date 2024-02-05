#include <stdio.h>

int REV(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}
int main() {
    int number;
    printf("Enter the integer: ");
    scanf("%d", &number);

    int r_n = REV(number);

    printf("The reversed number is: %d", r_n);

    return 0;
}
