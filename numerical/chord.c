/*
 * This program solves 2cos(x)-7x=0 on [0, 1]
 * using The Secant method
*/
#include <stdio.h>
#include <math.h>

#define EPS 10e-4 // Accuracy
#define A 0.0 // Solve on [A, B]
#define B 1.0

// The function and its derivative
double F(double x){
    return 2*cos(x)-7*x;
}
double Fd(double x){
    return -2*sin(x)-7;
}

int main(void) {
    double x0, xn, xn1, c, tmp;
    int n = 1;
    x0 = A;
    xn = x0;
    tmp = F(xn);
    xn1 = xn - tmp * (B - xn) / (F(B) - tmp);
    c = (Fd(B) - Fd(A)) / Fd(A);
    while (c * fabs(xn1 - xn) > EPS){
        xn = xn1;
        tmp = F(xn);
        xn1 = xn - tmp * (B - xn) / (F(B) - tmp);
        n++;
    }
    printf("Solve 2cos(x)-7x=0 on [%.1f, %.1f]; x0=%.1f using The Secant method\n", A, B, x0);
    printf("x = %f   n = %d \n", xn1, n); // Print results and number of iterations
    return 0;
}
