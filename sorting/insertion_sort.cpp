#include <iostream>
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))

using namespace std;

void insertionSort(int *a, const int N){
	int j, tmp;
	for (int i = 1; i < N; i++) {
		j = i;
		while (j > 0 && a[j-1] > a[j]) { // Use "<" for descending order
			tmp = a[j-1]; // Swap a[j-1] and a[j]
			a[j-1] = a[j];
			a[j] = tmp;
			j--;
		}
	}
}

int main(){
	int a[] = {4,1,2,5,0,7,2};
	const int N = arraySize(a);
	insertionSort(a, N);
	for (int i = 0; i < N; i++){
		std::cout << a[i] << " ";
	}
	return 0;
}
