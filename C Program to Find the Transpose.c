#include <stdio.h>
#define ROW 3
#define COL 3

int main() {
    int a[ROW][COL], transpose[COL][ROW];

    printf("Enter elements of matrix (3x3):\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < ROW; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}