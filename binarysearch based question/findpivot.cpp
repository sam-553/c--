#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid= s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;

        }else{
            e=mid;
        }

    }
    return s;

}
int main(){
    int arr[100]={5,7,9,1,2,3};
    cout<<"pivot element is at index:"<<getpivot(arr,5);

}