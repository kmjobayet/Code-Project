#include <stdio.h>

int main() {
    FILE *source = fopen("source.txt", "r");
    FILE *dest = fopen("dest.txt", "w");
    if (source == NULL || dest == NULL) {
        perror("Error opening files");
        return 1;
    }
    char buffer[1024];
    size_t bytes;
    while ((bytes = fread(buffer, 1, sizeof(buffer), source)) > 0) {
        fwrite(buffer, 1, bytes, dest);
    }
    fclose(source);
    fclose(dest);
    printf("Content written successfully.\n");
    return 0;
}