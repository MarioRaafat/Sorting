#pragma once

#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> arr){
    const int n = arr.size();
    int key, j;

    for (int i = 1; i < n; i++) {
        key  = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }

        arr[j+1] = key;
    }

    return arr;
}