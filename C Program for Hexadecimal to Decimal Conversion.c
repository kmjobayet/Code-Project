#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex_str[50];
    long decimal;
    
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex_str);
    
    decimal = strtol(hex_str, NULL, 16);  // Base 16
    printf("Decimal value: %ld\n", decimal);
    
    return 0;
}