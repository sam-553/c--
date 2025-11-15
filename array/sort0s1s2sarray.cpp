// duch national flag algorithm
#include<iostream>
using namespace std;
int main(){
    int a[]={2,2,0,1,0,2,1,0};
    int n=sizeof(a)/sizeof(int);
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            mid++,low++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[high],a[mid]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}