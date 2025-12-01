#include <stdio.h>

int main() {
    FILE *source = fopen("source.txt", "r");
    FILE *dest = fopen("dest.txt", "a");
    if (source == NULL || dest == NULL) {
        perror("Error opening files");
        return 1;
    }
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    fclose(source);
    fclose(dest);
    printf("Content appended successfully.\n");
    return 0;
}