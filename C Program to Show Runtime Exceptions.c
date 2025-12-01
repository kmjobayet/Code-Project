#include <stdio.h>

int main() {
    int a = 10;
    int b = 0;
    int result = a / b;  // This will cause a runtime exception (division by zero)
    printf("Result: %d\n", result);
    return 0;
}