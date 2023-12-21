#include <stdio.h>

int main() {
    int N, M;

    while (1) {
        printf("Enter two numbers N and M: ");
        scanf("%d %d",&N,&M);

        if (N <= 0 || M <= 0) {
            printf("Error");
            break;
        }
		
        printf("Numbers between %d and %d inclusive: ", N, M);
        int sum = 0;
        for (int i = N;i <= M;i++) {
            printf("%d ",i);
            sum += i;
        }
        printf("sum = %d\n", sum);
    }

    return 0;
}
