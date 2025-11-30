#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPangram(char str[]) {
    int count[26] = {0};
    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') count[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) if (count[i] == 0) return 0;
    return 1;
}

int main() {
    char str[200];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    if (isPangram(str)) printf("Pangram\n");
    else printf("Not a pangram\n");
    return 0;
}