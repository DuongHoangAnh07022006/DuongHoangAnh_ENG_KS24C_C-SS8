#include <stdio.h>

int main() {
    int n;
    printf("Nhap v�o so nguy�n: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Nhap c�c phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Ma tran vu�ng %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

