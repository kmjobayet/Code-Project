#include <stdio.h>
#define N 3

int main() {
    int a[N][N];
    int primaryDiagonal = 0, secondaryDiagonal = 0;

    printf("Enter elements of matrix (3x3):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        primaryDiagonal += a[i][i];
        secondaryDiagonal += a[i][N - 1 - i];
    }

    printf("Sum of primary diagonal: %d\n", primaryDiagonal);
    printf("Sum of secondary diagonal: %d\n", secondaryDiagonal);

    return 0;
}