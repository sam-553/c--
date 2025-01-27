#include<iostream>
using namespace std;
int swapalternate(int arr[],int size){

    for(int i=0;i<size;i+=2){
     
        if(i+1<size){
            swap(arr[i],arr[i+1]);
              
          
        }
    }
    
}
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}

int main(){
int size;
    cout<<"enter thr size of array :"<<endl;
    cin>>size;
    int arr[100];
    cout << "enter the elements of arr:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    swapalternate(arr,size);
    printarray(arr,size);


}