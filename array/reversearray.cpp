#include<iostream>
using namespace std;
int reversearray(int arr[],int size){
   int  start=0;
   int end=size-1;
   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
  
}
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}

int main(){
    int size;
    cout<<"enter thr size of array :"<<endl;
    cin>>size;
    int arr[100];
    cout << "enter the elements of arr:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    reversearray(arr,size);
    printarray(arr,size);
}