#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 3};
    vector<int> arr2 = {3, 4, 5, 6, 3, 7};
    vector<int> res;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    int i = 0, j = 0;

    // Merge arrays arr1 and arr2 without duplicates
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            // Check for duplicates before adding to result
            if (res.empty() || res.back() != arr1[i]) {
                res.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            // Check for duplicates before adding to result
            if (res.empty() || res.back() != arr2[j]) {
                res.push_back(arr2[j]);
            }
            j++;
        } else {
            // Add only once when both are equal
            if (res.empty() || res.back() != arr1[i]) {
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Append remaining elements from arr1 (if any), avoiding duplicates
    while (i < arr1.size()) {
        if (res.empty() || res.back() != arr1[i]) {
            res.push_back(arr1[i]);
        }
        i++;
    }

    // Append remaining elements from arr2 (if any), avoiding duplicates
    while (j < arr2.size()) {
        if (res.empty() || res.back() != arr2[j]) {
            res.push_back(arr2[j]);
        }
        j++;
    }

    // Output the merged result
    for (int val : res) {
        cout << val << " ";
    }

    return 0;
}
