#include <stdio.h>
#include <string.h>

int main() {
    char pattern[100];
    printf("Enter pattern: ");
    scanf("%s", pattern);
    FILE *file = fopen("text.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern)) {
            printf("%s", line);
        }
    }
    fclose(file);
    return 0;
}