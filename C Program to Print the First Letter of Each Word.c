#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("First letters: ");
    for (int i = 0; str[i]; i++) {
        if (i == 0 || isspace(str[i - 1])) printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}