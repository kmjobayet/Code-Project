#include <stdio.h>

int main() {
    printf("This will execute.\n");
    return 0;
    printf("This is unreachable code.\n");  // Unreachable after return
    return 0;
}