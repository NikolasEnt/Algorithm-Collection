#include <iostream>
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))

using namespace std;

// Function for an array printing
void print_arr(int* a, int N){
	for (int i = 0; i < N; i++){
		cout << a[i] << " ";
	}
}

void ShellSort(int *a, const int N){
	int j, tmp;
	int counter = 0; // Count number of the loop executions
	int d; // The gap
	for (d = 1; d <= N / 9; d = 3 * d + 1); // Find the biggest gap to start
	for (; d > 0; d /= 3){
		for (int i = d; i < N; i++){
			j = i;
			tmp = a[i];
			while (tmp < a[j-d] && j >= d){  // Find position for insert
				a[j] = a[j-d];
				j -= d;
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
	ShellSort(a, N);
	return 0;
}
