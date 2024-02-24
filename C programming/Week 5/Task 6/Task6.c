#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n;i++) {
        printf("Element %d: ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("Reversed Array:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
