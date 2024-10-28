#include <vector>
#include <iostream>
#include "bubble/bubbleSort.h"
#include "insertion/insertionSort.h"
#include "selection/selectionSort.h"
#include "merge/mergeSort.h"
#include "quick/quickSort.h"
#include "heap/heapSort.h"
#include "counting/countingSort.h"
#include "radix/radixSort.h"
// #include "bucket/bucketSort.h"
// #include "shell/shellSort.h"
using namespace std;


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    // random array
    vector<int> arr(n);
    vector<int> sortedArr;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }

    // sortedArr = bubbleSort(arr);
    // sortedArr = insertionSort(arr);
    // sortedArr = selectionSort(arr);
    // sortedArr = mergeSort(arr);
    // sortedArr = quickSort(arr);
    // sortedArr = heapSort(arr);
    // sortedArr = countingSort(arr);
    // sortedArr = radixSort(arr);
    // sortedArr = bucketSort(arr);
    // sortedArr = shellSort(arr);

    cout << "Sorted array: \n";
    for (int x : sortedArr) {
        cout << x << " ";
    }
    return 0;
}