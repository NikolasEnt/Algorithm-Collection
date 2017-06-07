#include <iostream>

using namespace std;

unsigned long long factorial_loop(int n) {
	if(n < 2) return 1;
	unsigned long long factorial = 1;
	for (int i = 2; i <= n; i++){
		factorial *= i;
	}
	return factorial;
}

int main() {
	int n;
	cout << "Enter N - a positive integer less than 21: ";
	cin >> n;
	if (n < 0 || n > 20)
		cout << "N should be a positive integer and N < 21\n";
	else
		cout << n << "! = " << factorial_loop(n) << endl;
	return 0;
}

