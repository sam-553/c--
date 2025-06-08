#include<iostream>
using namespace std;
int findSumofMaximumSubarray(int arr[],int n){
    int maxsum=INT16_MIN;
int currsum=0;
for(int i=0;i<n;i++){
     currsum+=arr[i];
     maxsum=max(currsum,maxsum);
     if(currsum<0){
        currsum=0;
     }
}
return maxsum;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<findSumofMaximumSubarray(arr,n)<<endl;
}