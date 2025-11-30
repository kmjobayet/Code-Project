#include <stdio.h>
#include <stdlib.h>

int main() {
    char octal_str[50];
    long decimal;
    
    printf("Enter an octal number: ");
    scanf("%s", octal_str);
    
    decimal = strtol(octal_str, NULL, 8);  // Base 8
    printf("Decimal value: %ld\n", decimal);
    
    return 0;
}