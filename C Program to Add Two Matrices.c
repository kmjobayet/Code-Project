#include <stdio.h>
#define ROW 3
#define COL 3

int main() {
    int a[ROW][COL], b[ROW][COL], sum[ROW][COL];

    printf("Enter elements of first matrix (3x3):\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix (3x3):\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}