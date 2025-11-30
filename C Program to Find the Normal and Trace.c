#include <stdio.h>
#include <math.h>
#define N 3

int main() {
    int a[N][N];
    int trace = 0;
    double normal = 0.0;

    printf("Enter elements of matrix (3x3):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        trace += a[i][i];
        for (int j = 0; j < N; j++) {
            normal += a[i][j] * a[i][j];
        }
    }
    normal = sqrt(normal);

    printf("Trace of the matrix: %d\n", trace);
    printf("Normal of the matrix: %.2f\n", normal);

    return 0;
}