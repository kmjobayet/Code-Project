#include <stdio.h>

int main() {
    int decimal, hex[32], i = 0;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        hex[i++] = decimal % 16;
        decimal /= 16;
    }
    
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        if (hex[j] < 10) {
            printf("%d", hex[j]);
        } else {
            printf("%c", 'A' + (hex[j] - 10));
        }
    }
    printf("\n");
    
    return 0;
}