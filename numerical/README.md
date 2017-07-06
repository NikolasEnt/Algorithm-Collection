# Numerical methods algorithms

## [Fixed-point iteration](/numerical/fixedpoint.c)

The Fixed-point iteration [algorithm](https://en.wikipedia.org/wiki/Fixed-point_iteration) is a simple numerical method  to solve equations. Actually, it finds a fixed point: x<sub>n+1</sub> = phi(x<sub>n</sub>) is hoped to converge to the fixed point x.

The presented program solves x<sup>2</sup>*lg(x)-3.8=0 on [2, 4]

## [Newton method](/numerical/Newton.c)

The Newton method [algorithm](https://en.wikipedia.org/wiki/Newton%27s_method) is a method for finding successively better approximations to the roots of a real-valued function f(x) = 0, that uses the first few terms of the Taylor series of the function f(x). It iterates:  starts with an initial guess, then the function is approximated by its tangent line, and computes the x-intercept of this tangent line. This x-intercept is a better approximation to the x: F(x)=0 root than the original guess.

The presented program solves 10x-exp(-2x)=0 on [-1, 1]

## [Secant method](/numerical/chord.c)

The Secant method [algorithm](https://en.wikipedia.org/wiki/Secant_method) is a simple numerical method  to solve equations, it is a finite difference approximation of the Newton's method.

The presented program solves 2cos(x)-7x=0 on [0, 1]

## [Tridiagonal matrix algorithm](/numerical/tridiagonal.c)

Tridiagonal matrix [algorithm](https://en.wikipedia.org/wiki/Tridiagonal_matrix_algorithm), also known as the Thomas algorithm, can be used to solve tridiagonal systems of equations:

A<sub>i</sub>*x<sub>i-1</sub> + C<sub>i</sub>*x<sub>i</sub> + B<sub>i</sub>*x<sub>i+1</sub> = F<sub>i</sub>

The presented program solves x'' + (1 / t) * x' - 2 * x = t<sup>2</sup>; 0.5 <= t <= 1; x(0.5) = 0; x'(1) = 0;



