#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;  

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;

            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    return (sum == num) ? 1 : 0;
}

int main() {
    printf("Perfect numbers between 1 and 100:\n");

    for (int i = 1; i <= 100; ++i) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
