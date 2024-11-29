#include <stdio.h>

int main() {
    int arr[3][4] = {
        {10, 25, 30, 14},
        {22, 35, 12, 44},
        {33, 18, 29, 11}
    };
    
    int max = arr[0][0]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j]; 
            }
        }
    }

    printf("Phan tu lon nhat trong mang là: %d\n", max);

    return 0;
}

