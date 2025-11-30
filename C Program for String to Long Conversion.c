#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50];
    long num;
    
    printf("Enter a string representing a long integer: ");
    scanf("%s", str);
    
    num = strtol(str, NULL, 10);  // Base 10
    printf("Long value: %ld\n", num);
    
    return 0;
}