#include <stdio.h>

int main() {
    char *ptr;
    char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ptr = alphabets;

    while (*ptr) {
        printf("%c\t", *ptr);
        ptr++;
    }
    return 0;
}
