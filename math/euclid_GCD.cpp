#include <iostream>

using namespace std;

int euclidGCD(int a, int b) {
	if (a == 0) return b;
	if (b == 0) return a;
	if (a >= b) return euclidGCD(a % b, b);
	if (b >= a) return euclidGCD(b % a, a);
	return 0;
}

int main() {
	int a, b;
	cout << "Enter (a,b) positive integers:";
	cin >> a >> b;
	cout << "GCD(" << a << "," << b << ") = " << euclidGCD(a,b) << endl;
	return 0;
}

