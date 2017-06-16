#include <iostream>
#define NMAX 93 // Maximal number N to calculate F(N)

using namespace std;

int counter = 0; // Counts algorithm iteration number

unsigned long long fibRecur(int n) {
	counter++;
	if (n < 2) {
		return n;
	}
	return fibRecur(n - 1) + fibRecur(n - 2);
}

unsigned long long fibRecurSave(int n) {
	counter++;
	static unsigned long long a[NMAX]; // Init with 0
	if (n < 2) {
		return a[n] = n;
	}
	if (a[n] > 0) return a[n];
	return a[n] = fibRecurSave(n - 1) + fibRecurSave(n - 2);
}

int main(){
	int n;
	cout << "Enter N:" << endl;
	cin >> n;
	if (n < 0 || n > NMAX){
		cout << "N should be in [0, 93];" << endl;
	}
	else {
		cout << "Recurrent algorithm: F(" << n << ") = " << fibRecur(n) << endl;
		cout << "Iter: " << counter << endl << endl;
		counter = 0;
		cout << "Recurrent algorithm with save: F(" << n << ") = "  << fibRecurSave(n) << endl;
		cout << "Iter: " << counter << endl;
	}
	return 0;
}
