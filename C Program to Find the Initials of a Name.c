#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove trailing newline
    name[strcspn(name, "\n")] = 0;
    
    printf("Initials: ");
    for (int i = 0; i < strlen(name); i++) {
        if (i == 0 || name[i-1] == ' ') {
            printf("%c.", toupper(name[i]));
        }
    }
    printf("\n");
    
    return 0;
}