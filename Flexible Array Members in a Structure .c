#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int len;
    char data[];  // Flexible array member
} FlexArray;

int main() {
    int size = 5;
    FlexArray *fa = malloc(sizeof(FlexArray) + size * sizeof(char));
    fa->len = size;
    for (int i = 0; i < size; i++) {
        fa->data[i] = 'A' + i;
    }
    
    printf("Data: ");
    for (int i = 0; i < fa->len; i++) {
        printf("%c ", fa->data[i]);
    }
    printf("\n");
    
    free(fa);
    return 0;
}