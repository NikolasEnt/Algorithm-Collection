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
	for (int i = 1; i < N; i++) {
		j = i;
		while (j > 0 && a[j-1] > a[j]) { // Use "<" for descending order
			tmp = a[j-1]; // Swap a[j-1] and a[j]
			a[j-1] = a[j];
			a[j] = tmp;
			j--;
			counter++;
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
