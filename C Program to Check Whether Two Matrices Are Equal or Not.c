#include <stdio.h>
#define ROW 3
#define COL 3

int main() {
    int a[ROW][COL], b[ROW][COL];
    int equal = 1;

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
            if (a[i][j] != b[i][j]) {
                equal = 0;
                break;
            }
        }
        if (!equal) break;
    }

    if (equal) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}