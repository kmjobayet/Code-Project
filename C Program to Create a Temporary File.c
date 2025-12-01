#include <stdio.h>

int main() {
    FILE *temp = tmpfile();
    if (temp == NULL) {
        perror("Failed to create temporary file");
        return 1;
    }
    fprintf(temp, "This is a temporary file.\n");
    printf("Temporary file created and written to.\n");
    fclose(temp);  // File is deleted here
    return 0;
}