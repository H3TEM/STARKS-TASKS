#include <stdio.h>

void DTB(unsigned int n) {
    int binary[32];
    int i = 0;
    if (n == 0) {
        printf("Binary equivalent: 0\n");
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    unsigned int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%u", &decimalNumber);
    DTB(decimalNumber);

    return 0;
}
