#include <iostream>
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))

using namespace std;

// Function for an array printing
void print_arr(int* a, int N){
	for (int i = 0; i < N; i++){
		cout << a[i] << " ";
	}
}

// Simple bubble sorting algorithm
void bubbleSort(int *a, const int N){
	bool swapped = true;
	int tmp;
	int counter = 0; // Count number of the loop executions
	while (swapped){ // While we have to swap a pair of elements
		swapped = false;
		for (int i = 1; i < N; i++){ // Check pairs
			if (a[i-1] > a[i]){
				tmp = a[i-1]; // Swap a[i-1] and a[i]
				a[i-1] = a[i];
				a[i] = tmp;
				swapped = true;
			}
			counter++;
		}
	}
	cout << "Sorted! ";
	print_arr(a,N);
	cout << " Steps = " << counter << endl;
}

// Optimized bubble sorting algorithm
void bubbleSortOpt(int *a, const int N){
	bool swapped = true;
	int tmp;
	int counter = 0; // Count number of the loop executions
	for (int j = 0; j < N; j++){
		swapped = false;
		for (int i = 1; i < N-j; i++){
			if (a[i-1] > a[i]){
				tmp = a[i-1]; // Swap a[i-1] and a[i]
				a[i-1] = a[i];
				a[i] = tmp;
				swapped = true;
			}
			counter++;
		}
	if (!swapped) break;
	}
	cout << "Sorted! ";
	print_arr(a,N);
	cout << " Steps = " << counter << endl;
}

int main(){
	int a[] = {4, 1, 2, -1, 5, 0, 7, 2, 9, 10};
	const int N = arraySize(a);
	int b[N];
	copy(begin(a), end(a), begin(b)); // b = a, just a copy for the second algorithm
	bubbleSort(a, N);
	bubbleSortOpt(b, N);
	return 0;
}
