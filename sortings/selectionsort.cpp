#include<iostream>
using namespace std;
int selectionSort(int arr[]){
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main(){
    
   int arr[5]={1,3,4,2,7};
   
   selectionSort(arr);

   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }

}