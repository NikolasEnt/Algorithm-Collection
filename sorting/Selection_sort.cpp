#include <iostream>
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))

using namespace std;

// Function for an array printing
void print_arr(int* a, int N){
	for (int i = 0; i < N; i++){
		cout << a[i] << " ";
	}
}

void selectionSort(int *a, const int N){
	int tmp, index;
	int counter = 0; // Count number of the loop executions
	for (int i = 0; i < N - 1; i++){ // Iterate through out the array
		index = i;
		for (int j = i + 1; j < N; j++){ // Find the minimum
			if (a[j] < a[index]){
				index = j;
			}
		counter++;
		}
		if (index != i){ // Swap elements
			tmp = a[i];
			a[i] = a[index];
			a[index] = tmp;
		}
	}
	cout << "Sorted! ";
	print_arr(a,N);
	cout << " Steps = " << counter << endl;
}

int main(){
	int a[] = {4, 1, 2, -1, 5, 0, 7, 2, 9, 10};
	const int N = arraySize(a);
	selectionSort(a, N);
	return 0;
}
