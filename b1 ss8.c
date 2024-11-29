#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Các phan tu trong mang tu cuoi ve dau là:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

