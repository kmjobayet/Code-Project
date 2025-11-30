#include <stdio.h>
#define ROW 3
#define COL 3

int main() {
    int a[ROW][COL];

    printf("Enter elements of matrix (3x3):\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Boundary elements:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1) {
                printf("%d ", a[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}