#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + (n - k));
    reverse(arr.begin() + (n - k), arr.end());
    reverse(arr.begin(), arr.end());
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotate(arr,2);
    for(int val:arr){
        cout<<val<<" ";
    }
}