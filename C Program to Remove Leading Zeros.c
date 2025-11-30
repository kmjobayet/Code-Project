#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int i = 0;
    while (str[i] == '0') i++;
    if (str[i] == '\0') strcpy(str, "0");
    else memmove(str, str + i, strlen(str) - i + 1);
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    removeLeadingZeros(str);
    printf("Result: %s\n", str);
    return 0;
}