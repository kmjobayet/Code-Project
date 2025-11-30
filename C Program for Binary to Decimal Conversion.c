#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary_str[32];
    int decimal = 0, len;
    
    printf("Enter a binary number: ");
    scanf("%s", binary_str);
    
    len = strlen(binary_str);
    for (int i = 0; i < len; i++) {
        if (binary_str[i] == '1') {
            decimal += pow(2, len - 1 - i);
        }
    }
    
    printf("Decimal value: %d\n", decimal);
    
    return 0;
}