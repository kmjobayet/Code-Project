#include <stdio.h>
#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

int main() {
    int a[ROW1][COL1], b[ROW2][COL2], product[ROW1][COL2] = {0};

    if (COL1 != ROW2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    printf("Enter elements of first matrix (3x3):\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix (3x3):\n");
    for (int i = 0; i < ROW2; i++) {
        for (int j = 0; j < COL2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            for (int k = 0; k < COL1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}