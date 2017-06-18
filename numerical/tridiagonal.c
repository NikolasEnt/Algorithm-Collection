/*
* This program solves x''+(1/t)*x'-2*x=t^2; 0.5<=t<=1; x(0.5)=0; x'(1)=0;
* by the tridiagonal matrix algorithm.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define t0 0.5 // Start time t
#define tN 1.0 // End time t
#define Nmax 20 // Number of steps
double tau;

double A(int i) {
	return ((1. + (i + i) * tau - tau) / ((1. + (i + i) * tau) * tau * tau));
}

double B(int i) {
	return ((1. + (i + i) * tau + tau) / ((1. + (i + i) * tau) * tau * tau));
}

double F(int i) {
	double x = tau * i + t0;;
	return -x * x;
}

int main() {
	int i;
	double x[Nmax+1], alpha[Nmax], beta[Nmax];
	double C, m, Ai, Bi;
	int c[3] = {0,0,0}; // Counters for check. (c[0] == 0, c[1] >=, c[2] >)
	tau = (tN - t0) / Nmax;
	C = 2. * (1. + 1./ (tau * tau));
	printf("t0 = %.2f; tN = %.2f\n", t0, tN);
	printf("\ntau = %f; N_max = %d\n", tau, Nmax);
	alpha[1] = 0;
	beta [1] = 0;
	for (i = 1; i < Nmax; i++) {
		Ai = A(i);
		Bi = B(i);
		m = C - Ai * alpha[i];
		alpha[i+1] = Bi / m;
		beta [i+1] = (F(i) + Ai * beta[i]) / m;
		if (Ai == 0) c[0]++;
		if (Bi == 0) c[0]++;
		if(abs(C) >= (abs(Ai) + abs(Bi))) c[1]++;
		if(abs(C) > (abs(Ai) + abs(Bi))) c[2]++;
	}
	if (C == 0) c[0]++;
	if (abs(C) >= abs(B(0))) c[1]++;
	if (abs(C) > abs(B(0))) c[2]++;
	if (abs(C) >= abs(A(Nmax))) c[1]++;
	if (abs(C) > abs(A(Nmax))) c[2]++;
	// Check if the solution is correct and stable
	if ((c[0] == 0) && (c[1] == Nmax + 1) && (c[2] > 0)){
		printf("\nThe solution is OK!\n");
	}
	else {
		printf("\nThe solution may be BAD!\n");
	}
	x[Nmax]=(0.5 * F(Nmax) * tau * tau + beta[Nmax]) / (1. - alpha[Nmax] + tau * tau);
	for (i = Nmax; i > 0; i--) {
		x[i-1] = alpha[i] * x[i] + beta[i];
	}
	for (i = 0; i <= Nmax; i++)	{
		printf("i = %2i \t t = %4g \t x = %9g\n", i, t0 + i * tau, x[i] );
	}
	return 0;
}
