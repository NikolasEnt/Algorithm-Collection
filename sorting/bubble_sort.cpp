#include <iostream>
#define arraySize(a) (sizeof(a)/sizeof((a)[0]))

using namespace std;

void bubbleSort(int *a, const int N){
	bool swapped = true;
	int tmp;
	while (swapped){
		swapped = false;
		for (int i = 1; i < N; i++){
			if (a[i-1] > a[i]){
				tmp = a[i-1]; // Swap a[i-1] and a[i]
				a[i-1] = a[i];
				a[i] = tmp;
				swapped = true;
			}
		}
	}
}

int main(){
	int a[] = {4,1,2,5,0,7,2};
	const int N = arraySize(a);
	bubbleSort(a, N);
	for (int i = 0; i < N; i++){
		std::cout << a[i] << " ";
	}
	return 0;
}
