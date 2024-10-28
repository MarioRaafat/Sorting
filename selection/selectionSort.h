#pragma once

#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> arr){
    const int n = arr.size();
    int minIndex;

    for (int i = 0; i < n-1; i++) {
        minIndex = i;

        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }

    return arr;
}