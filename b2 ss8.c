#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;
    printf("Nhao vao mot phan tu: ");
    scanf("%d", &x);
    for (int i = 0; i < length; i++) {
        if (arr[i] == x) {
            printf("Vi trí phan tu trong mang là: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

