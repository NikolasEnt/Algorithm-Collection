# Sorting
## [Bubble sort](/sorting/bubble_sort.cpp)

A simple stable comparison sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. Passes through the list are repeated until no swaps are needed.

Complexity: О(N^2)

Memory usage: O(1)

## [Insertion sort](/sorting/insertion_sort.cpp)

Insertion sort is a simple stable in-place comparison sorting algorithm that works the way people usually sort playing cards in their hands. It works by taking elements from the list one by one and inserting them in their correct position into the already sorted sub-list. Insertion realized by shifting in the present implementation. It is suitable for online sorting. 

Complexity: О(N^2)

Memory usage: O(1)

## [Selection sort](/sorting/Selection_sort.cpp)

Selection sort is a simple in-place comparison sorting algorithm. It takes elements one by one, finds the smallest element in the unsorted part of the array and, if it is smaller than the current element, swaps them. It has О(n^2) complexity, but can be useful for sorting array of big data structures, as it involves only O(N) swaps.

Complexity: О(N^2) - always

Memory usage: O(1)

## [Shell sort](/sorting/Shell_sort.cpp)

The presented realization is based on insertion sort. The algorithm starts by sorting pairs of elements far apart from each other, then reduce the gap between elements to be compared on each iteration. The algorithm is unstable. Computational complexity depends on the gap sequence. For the given [...,40,13,4,1]: 

Complexity: О(N^3/2)

Memory usage: O(1)

## [Merge sort](/sorting/Merge_sort.cpp)

Merge sort is a divide and conquer stable sorting algorithm that was invented by John von Neumann. It divides the input array into two halves, calls itself for the two halves and finally merges the two sorted halves. The merge(a, l, r, m) is the key function that assumes that parts a[l..m] and a[m+1..r] are already sorted and merges them into one sorted array.

Complexity: О(N*log(N))

Memory usage: O(N)