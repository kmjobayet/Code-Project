#include <stdio.h>

int main() {
    FILE *file1 = fopen("file1.txt", "rb");
    FILE *file2 = fopen("file2.txt", "rb");
    if (file1 == NULL || file2 == NULL) {
        perror("Error opening files");
        return 1;
    }
    int ch1, ch2, pos = 0;
    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        pos++;
        if (ch1 != ch2) {
            printf("Mismatch at position %d: %c vs %c\n", pos, ch1, ch2);
        }
    }
    fclose(file1);
    fclose(file2);
    return 0;
}