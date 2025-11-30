#include <stdio.h>
#include <math.h>

void findRoots(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (d == 0) {
        double root = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root);
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }
}

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Not a quadratic equation.\n");
    } else {
        findRoots(a, b, c);
    }
    return 0;
}