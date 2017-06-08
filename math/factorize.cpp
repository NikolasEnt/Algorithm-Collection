#include <iostream>

using namespace std;

// Prime decomposition
int main(){
	int N;
	int d = 2; // Candidate divider
	cout << "Enter N: ";
	cin >> N;
	cout << N << " = 1";
	while (N>1){
		while ( N % d == 0){ // While d is a divider
			cout << " * " << d;
			N /= d; 
		}
		d++; // Take next divider
	}
}

