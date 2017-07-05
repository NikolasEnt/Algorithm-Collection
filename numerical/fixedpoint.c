/*
 * This program solves x^2*lg(x)-3.8=0 on [2, 4]
 * using The Fixed-point iteration
*/
#include <stdio.h>
#include <math.h>

#define EPS 10e-4 // Accuracy
#define A 2.0 // Solve on [A, B]
#define B 4.0
#define C 1.0

// The function x = phi(x)
double F(double x){
    return sqrt(3.8 / log10(x));
}

int main(void) {
    double x0, xn, xn1;
    int n = 0;
    x0 = A;
    xn = x0;
    xn1 = F(xn);
    while (C * fabs(xn1 - xn) > EPS){
        xn = xn1;
        xn1 = F(xn);
        n++;
    }
    printf("Solve x^2*lg(x)-3.8=0 on [%.1f, %.1f]; x0=%.1f using The Fixed-point iteration\n", A, B, x0);
    printf("x = %.5f   n = %d \n", xn1, n); // Print results and number of iterations
    return 0;
}
