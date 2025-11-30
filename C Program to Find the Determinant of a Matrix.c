#include <stdio.h>
#define N 3

int main() {
    int a[N][N];
    int det = 0;

    printf("Enter elements of matrix (3x3):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Determinant for 3x3 matrix
    det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    printf("Determinant of the matrix: %d\n", det);

    return 0;
}