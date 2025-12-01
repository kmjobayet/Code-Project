#include <stdio.h>

int main() {
    FILE *fp = fopen(__FILE__, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    
    fclose(fp);
    return 0;
}