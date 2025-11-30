#include <stdio.h>

int main() {
    int rows, i, j, num;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    num = rows * (rows + 1) / 2;  // Total numbers
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num--);
        }
        printf("\n");
    }
    return 0;
}