#include<iostream>
using namespace std;
int insertionSort(int a[],int size){
    for(int i=0;i<size;i++){
        int j=a[i];
        while(j>0 && a[j]<a[j-1]){
            swap(a[i],a[j]);
        }
    }
    return 0;
}
int main(){
    int a[10]={2,3,5,4,6,8,7,9,1,0};
    insertionSort(a,10);
    for(int i=0;i<10;i++){
        cout<<a[i];
    }

}