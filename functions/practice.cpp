#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 2, 3, 2, 4, 4, 5, 6, 6};
    vector<int> arr2 = {1, 2, 4, 4, 5, 6, 6, 7, 8, 99};
    vector<int> res;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            if (res.empty() || res.back() != arr1[i]) {
                res.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (res.empty() || res.back() != arr2[j]) {
                res.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (res.empty() || res.back() != arr1[i]) {
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < arr1.size())
    {
        if (res.empty() || res.back() != arr1[i]) {
            res.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size())
    {
        if (res.empty() || res.back() != arr2[j]) {
            res.push_back(arr2[j]);
        }
        j++;
    }
    for (int val : res)
    {
        cout << val<<" ";
    }
    return 0;
}