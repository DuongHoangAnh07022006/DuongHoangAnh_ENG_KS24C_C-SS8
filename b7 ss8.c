#include <stdio.h>

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int n = 4;  
    int sum = 0;
    printf("C�c phan tu tren duong cheo chinh cua ma tran l�:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\n");
    printf("Tong cua cac phan tu tren duong ch�o ch�nh l�: %d\n", sum);

    return 0;
}

