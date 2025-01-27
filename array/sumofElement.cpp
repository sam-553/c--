#include<iostream>
using namespace std;
int sumofelement(int  arr[],int n){
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements of array: "<<sum<<endl;
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
       
    }
     sumofelement(arr,size);
     return 0;
}