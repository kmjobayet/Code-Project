#include <stdio.h>

int main() {
    FILE *source = fopen("source.txt", "r");
    FILE *dest = fopen("dest.txt", "w");
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
    printf("File copied successfully.\n");
    return 0;
}