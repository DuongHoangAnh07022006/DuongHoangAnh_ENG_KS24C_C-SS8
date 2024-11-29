#include <stdio.h>

int main() {
    int n;
    printf("Nhap vào so nguyên: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Nhap các phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Ma tran vuông %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

