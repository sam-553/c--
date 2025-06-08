#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n) {
    int s = 0, e = n - 1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        
        
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
            return mid;  
        }
        
       
        else if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
       
        else {
            e = mid - 1;
        }
    }
    
    return -1;  
}

int main() {
    int arr[] = {1, 3, 5, 6, 4, 2};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeakElement(arr, n);
    cout << "Peak element is at index: " << peakIndex << endl;
    cout << "Peak element value: " << arr[peakIndex] << endl;

    return 0;
}
