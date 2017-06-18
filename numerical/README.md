# Numerical methods algorithms

## [Tridiagonal matrix algorithm](/numerical/tridiagonal.c)

Tridiagonal matrix [algorithm](https://en.wikipedia.org/wiki/Tridiagonal_matrix_algorithm), also known as the Thomas algorithm, can be used to solve tridiagonal systems of equations:

A<sub>i</sub>*x<sub>i-1</sub> + C<sub>i</sub>*x<sub>i</sub> + B<sub>i</sub>*x<sub>i+1</sub> = F<sub>i</sub>

The presented program solves x'' + (1 / t) * x' - 2 * x = t<sup>2</sup>; 0.5 <= t <= 1; x(0.5) = 0; x'(1) = 0;

