#include <stdio.h>

double power(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / power(x, -n);
    return x * power(x, n - 1);
}

int main() {
    double x;
    int n;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &x, &n);
    printf("%.2f ^ %d = %.2f\n", x, n, power(x, n));
    return 0;
}