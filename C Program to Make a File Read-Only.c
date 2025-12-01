#include <stdio.h>
#include <sys/stat.h>

int main() {
    if (chmod("example.txt", S_IRUSR | S_IRGRP | S_IROTH) == 0) {
        printf("File set to read-only.\n");
    } else {
        perror("Error setting file to read-only");
    }
    return 0;
}