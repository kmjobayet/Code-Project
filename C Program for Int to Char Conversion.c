#include <stdio.h>

int main() {
    int num;
    char ch;
    
    printf("Enter an integer (0-255): ");
    scanf("%d", &num);
    
    if (num >= 0 && num <= 255) {
        ch = (char)num;
        printf("Character: %c\n", ch);
    } else {
        printf("Invalid range.\n");
    }
    
    return 0;
}