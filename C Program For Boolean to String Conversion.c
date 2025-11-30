#include <stdio.h>

int main() {
    int bool_val;
    printf("Enter a boolean value (0 for false, non-zero for true): ");
    scanf("%d", &bool_val);
    
    const char* str = (bool_val == 0) ? "false" : "true";
    printf("String representation: %s\n", str);
    
    return 0;
}