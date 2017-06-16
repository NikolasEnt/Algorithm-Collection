#include <iostream>
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))

using namespace std;

// Function for an array printing
void print_arr(int* a, int N){
	for (int i = 0; i < N; i++){
		cout << a[i] << " ";
	}
}

void insertionSort(int *a, const int N){
	int j, tmp;
	int counter = 0; // Count number of the loop executions
	for (int i = N-1; i > 0; i--){ // One loop like bubble sort
		if (a[i-1] > a[i]){
			tmp = a[i-1]; // Swap a[i-1] and a[i]
			a[i-1] = a[i];
			a[i] = tmp;
		}
		counter++;
	}
	if (N > 2) {
		for (int i = 2; i < N; i++){
			j = i;
			tmp = a[i];
			while (tmp < a[j-1] && j > 0){  // Find position for insert
				a[j] = a[j-1];
				j--;
				counter++;
			}
			a[j] = tmp;
		}
	}
	cout << "Sorted! ";
	print_arr(a,N);
	cout << " Steps = " << counter << endl;
}

int main(){
	int a[] = {4, 1, 2, -1, 5, 0, 7, 2, 9, 10};
	const int N = arraySize(a);
	insertionSort(a, N);
	return 0;
}
