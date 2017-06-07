#include <iostream>

using namespace std;

unsigned long long factorial_recur(int n) {
	if(n < 2) return 1;
	return n * factorial_recur(n - 1);
}

int main() {
	int n;
	cout << "Enter N - a positive integer less than 21: ";
	cin >> n;
	if (n < 0 || n > 20)
		cout << "N should be a positive integer and N < 21\n";
	else
		cout << n << "! = " << factorial_recur(n) << endl;
	return 0;
}

