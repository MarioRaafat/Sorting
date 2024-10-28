#pragma once

#include <vector>
using namespace std;

vector<int> merge(vector<int>& A, vector<int>& B) {
    vector<int> C;
    auto itA = A.begin(), itB = B.begin();

    while (itA != A.end() && itB != B.end()) {
        if (*itA < *itB) {
            C.push_back(*itA);
            ++itA;
        } else {
            C.push_back(*itB);
            ++itB;
        }
    }

    C.insert(C.end(), itA, A.end());
    C.insert(C.end(), itB, B.end());

    return C;
}

vector<int> mergeSort(vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    auto mid = arr.begin() + arr.size() / 2;
    vector<int> left(arr.begin(), mid);
    vector<int> right(mid, arr.end());

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}