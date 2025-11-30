#include <stdio.h>
#define ROW 3
#define COL 3

int main() {
    int a[ROW][COL];
    int temp;

    printf("Enter elements of matrix (3x3):\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Interchange first and last rows
    for (int j = 0; j < COL; j++) {
        temp = a[0][j];
        a[0][j] = a[ROW - 1][j];
        a[ROW - 1][j] = temp;
    }

    printf("Matrix after interchanging first and last rows:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}