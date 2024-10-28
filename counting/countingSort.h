#pragma once

#include <vector>
#include <algorithm>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    if (arr.empty()) return arr;

    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());


    int range = max - min + 1;
    vector<int> count(range, 0);
    vector<int> output(arr.size());

    // Count occurrences of each element
    for (int num : arr) {
        count[num - min]++;
    }

    // Accumulate counts to get positions
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // Build the sorted output array
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    return output;
}