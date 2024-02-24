#include <stdio.h>

void Cube(void *value, char type) {
    switch (type) {
        case 'i':
            *(int*)value = (*(int*)value) * (*(int*)value) * (*(int*)value);
            break;
        case 'f': 
            *(float*)value = (*(float*)value) * (*(float*)value) * (*(float*)value);
            break;
        case 'd': 
            *(double*)value = (*(double*)value) * (*(double*)value) * (*(double*)value);
            break;
        default:
            printf("Invalid type.\n");
            break;
    }
}

int main() {
    char type;
    printf("Enter the type of the value ('i' for integer, 'f' for float, 'd' for double): ");
    scanf(" %c", &type);

    if (type != 'i' && type != 'f' && type != 'd') {
        printf("Invalid type entered.\n");
        return 1;
    }

    if (type == 'i') {
        int intValue;
        printf("Enter an integer value: ");
        scanf("%d", &intValue);

        Cube(&intValue, type);

        printf("Cube: %d\n", intValue);
    } else if (type == 'f') {
        float floatValue;
        printf("Enter a float value: ");
        scanf("%f", &floatValue);

        Cube(&floatValue, type);

        printf("Cube: %f\n",floatValue);
    } else if (type == 'd') {
        double doubleValue;
        printf("Enter a double value: ");
        scanf("%lf", &doubleValue);

        Cube(&doubleValue,type);

        printf("Cube: %lf\n", doubleValue);
    }

    return 0;
}

I// I understand the idea, but I used chat gpt
