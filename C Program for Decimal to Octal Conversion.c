#include <stdio.h>

int main() {
    int decimal, octal[32], i = 0;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }
    
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
    
    return 0;
}