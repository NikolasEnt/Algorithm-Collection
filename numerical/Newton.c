/*
 * This program solves 10x-exp(-2x)=0 on [-1, 1]
 * using The Newton Method
*/
#include <stdio.h>
#include <math.h>

#define EPS 10e-4 // Accuracy
#define A -1.0 // Solve on [A, B]
#define B 1.0

// The function and its derivative
double F(double x){
    return 10 * x - exp(-2 * x);
}
double Fd(double x){
    return 10 + 2 * exp(-2 * x);
}

int main(void) {
    double x0, xn, xn1, c;
    int n = 1;
    x0 = B;
    xn = x0;
    xn1 = xn - F(xn) / Fd(xn);
    c = (Fd(A) - Fd(B)) / Fd(B);
    while (c * fabs(xn1 - xn) > EPS){
        xn = xn1;
        xn1 = xn - F(xn) / Fd(xn);
        n++;
    }
    printf("Solve 10x-exp(-2x)=0 on [%.1f, %.1f]; x0=%.1f using The Newton Method\n", A, B, x0);
    printf("x = %f   n = %d \n", xn1, n);
    return 0;
}
