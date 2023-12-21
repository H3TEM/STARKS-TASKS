#include <stdio.h>

int main() {
    int N,i,x = 1;
    printf("Enter the value of N : ");
    scanf("%d",&N);

    
    if (N >= 1 && N <= 20) {
    
		for (i = 0;i < N;i++) {
			printf("%d %d %d PUM\n",x,x+1,x+2);
			x += 4;
		}
	}
	else
		printf("Invalid choice\n");
        

    return 0;
}
