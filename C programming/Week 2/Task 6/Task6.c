#include <stdio.h>

int main() {
	
    int LWeight, BWeight;
    printf("Enter Limak's weight and Bob's weight : \n");
    scanf("%d %d", &LWeight, &BWeight);

    if (LWeight > BWeight) 
        printf("Limak is already larger than Bob\n");

    int years = 0;
    while (LWeight < BWeight) {
        LWeight *= 3; 
        BWeight *= 2;  
        years++;
    }
    printf("Limak will become larger than Bob after %d years\n", years);

    return 0;
}
