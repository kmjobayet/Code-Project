#include <stdio.h>

// Define structure for complex number
typedef struct {
    float real;
    float imag;
} complex;

// Function to add two complex numbers
complex add(complex c1, complex c2) {
    complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    complex c1, c2, result;
    
    // Input first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    
    // Input second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    
    // Add them using the function
    result = add(c1, c2);
    
    // Output the result
    printf("Sum: %.2f + %.2fi\n", result.real, result.imag);
    
    return 0;
}