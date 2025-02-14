#include<iostream>
#include<algorithm>  // for swap
using namespace std;

int bubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100];
    cout << "Enter the elements of the array to be sorted: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
