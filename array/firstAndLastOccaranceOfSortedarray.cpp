#include<iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    mid=start+(end-start)/2;
    }
    return ans;
}
int lastoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<key){
            start=mid+1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    mid=start+(end-start)/2;
    }
    return ans;
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
    int firstfound=firstoccurance(arr,size,key);
    int lastfound=lastoccurance(arr,size,key);
    cout<<"the first occarance of "<<" "<<key<<" "<<"is  at index "<<firstfound<<endl;
    cout<<"the  last occurance of"<<" "<<key<<" is at index "<<lastfound<<endl;
}