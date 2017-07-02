#include <iostream>
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))

using namespace std;

// Function for an array printing
void print_arr(int* a, int N){
	for (int i = 0; i < N; i++){
		cout << a[i] << " ";
	}
}

// Merge two already sorted parts (l to m and m+1 to r).
void merge(int *a, const int l, const int r, const int m) {
	int i, j, k, tmp[r-l+1]; 
	i = l;
	j = m + 1;
	k = 0; // tmp[] array index
	// Merge the two parts into tmp[].
	while (i <= m && j <= r) {
		if (a[i] < a[j]) { // Sorting happen here
			tmp[k] = a[i];
			k++;
			i++;
		}
		else {
			tmp[k] = a[j];
			k++;
			j++;
		}
	}
	// Copy all the remaining values, if there are any, from i to m into tmp[].
	while (i <= m) {
		tmp[k] = a[i];
		k++;
		i++;
	}
	// Copy all the remaining values, if there are any, from j to r into tmp[].
	while (j <= r) {
		tmp[k] = a[j];
		k++;
		j++;
	}
	// Copy tmp[] to a[].
	for (i = l; i <= r; i++) {
		a[i] = tmp[i-l];
	}
}

void mergeSort(int *a, const int l, const int r){
	 if (l < r) {
        const int m = l+(r-l)/2; // Find how to divide into halves
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, r, m);
    }
}

int main() {
	int a[] = {4, 1, 2, -1, 5, 0, 7, 2, 9, 10}; // Array to sort
	const int N = arraySize(a);
	mergeSort(a, 0, N-1);
	cout << "Sorted! ";
	print_arr(a,N);
	return 0;
}
