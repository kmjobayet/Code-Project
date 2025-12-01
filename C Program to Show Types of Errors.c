#include <stdio.h>

int main() {
    // Compile-time error example (uncomment to see): printf("Hello World")  // Missing semicolon
    
    // Runtime error example
    int a = 10, b = 0;
    // int result = a / b;  // Uncomment to trigger runtime error
    
    // Logical error example: Intended to add, but subtracts
    int x = 5, y = 3;
    int sum = x - y;  // Logical error: should be x + y
    printf("Sum (logically incorrect): %d\n", sum);
    
    return 0;
}