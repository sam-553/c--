#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr1={1,2,3,3,4,5,6};
    vector<int> arr2={3,3,5,7};
    vector<int> res;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i=0,j=0;
    while(i<arr1.size()&&j<arr2.size()){
        if(arr1[i]==arr2[j]){
            res.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    for(int val:res){
        cout<<val<<" ";
    }

    
}