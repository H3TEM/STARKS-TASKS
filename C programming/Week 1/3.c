#include <stdio.h>

int main() 
{
    char x;

    printf("Enter a character: ");
    scanf(" %c", &x);

    printf("Character: %c\n", x);
    printf("ASCII code: %d\n", x);

    char previos_char = x - 1;
    char next_char = x + 1;

    printf("Previous character: %c\n", previos_char);
    printf("Next character: %c\n", next_char);

    return 0;
}
