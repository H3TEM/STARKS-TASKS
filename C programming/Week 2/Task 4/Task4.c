#include <stdio.h>

int main() {
    int V,F,M,T;
    
	printf("Enter the amount needed of using shampoo for Takahashi, his father and his mother respectively : \n");
    scanf("%d %d %d",&T,&F,&M);
	
	printf("Enter the remaining amount of shampoo in the bottle : ");
	scanf("%d",&V);

    float father = V / F;                                                            
    float mother = V / M;
    float takahashi = V / T;

    if (father <= mother && father <= takahashi) 
        printf("F");
    else if (mother <= father && mother <= takahashi)                            
        printf("M");
    else 
        printf("T");
    

    return 0;
}
