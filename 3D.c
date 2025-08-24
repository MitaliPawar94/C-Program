#include <stdio.h>
int main() {
    int arr[2][2][2];  // 3D array with 2x2x2 elements
    int i, j, k;

    printf("Enter 8 elements for 3D array:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("3D Array elements are:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}
