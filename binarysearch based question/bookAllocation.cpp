#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int>& arr, int n, int m, int maxallowpages) {
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxallowpages) {
            return false;  
        }
        if (pages + arr[i] <= maxallowpages) {
            pages += arr[i];  
        } else {
            students++;  
            pages = arr[i];  
            if (students > m) {
                return false;  
            }
        }
    }
    return true;  
}

int allocateBooks(vector<int>& arr, int n, int m) {
    if (m > n) {
        return -1;  
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  
    }

    int s = 0, e = sum, ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isvalid(arr, n, m, mid)) {
            ans = mid;  
            e = mid - 1;  
        } else {
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;
    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}
