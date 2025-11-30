#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += t1;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("Sum of Fibonacci numbers at even indexes up to %d terms is %d.\n", n, sum);
    
    return 0;
}