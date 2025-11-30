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

    // Interchange first and last columns
    for (int i = 0; i < ROW; i++) {
        temp = a[i][0];
        a[i][0] = a[i][COL - 1];
        a[i][COL - 1] = temp;
    }

    printf("Matrix after interchanging first and last columns:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}