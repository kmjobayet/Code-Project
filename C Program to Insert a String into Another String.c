#include <stdio.h>
#include <string.h>

void insertString(char dest[], char src[], int pos) {
    int len1 = strlen(dest), len2 = strlen(src);
    memmove(dest + pos + len2, dest + pos, len1 - pos + 1);
    memcpy(dest + pos, src, len2);
}

int main() {
    char dest[200], src[100];
    int pos;
    printf("Enter destination string: ");
    fgets(dest, sizeof(dest), stdin);
    dest[strcspn(dest, "\n")] = 0;
    printf("Enter source string: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = 0;
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos >= 0 && pos <= strlen(dest)) {
        insertString(dest, src, pos);
        printf("Result: %s\n", dest);
    } else printf("Invalid position\n");
    return 0;
}