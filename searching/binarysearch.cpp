#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
    }else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
    }
        return -1;
}
int main(){
    int size;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key that you want to search:"<<endl;
    cin>>key;
    int found=binarysearch(arr,size,key);
    cout<<"element"<<" "<<key<<" "<<"is present at index"<<" "<<found<<endl;
    
}