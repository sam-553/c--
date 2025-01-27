#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
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
    int key;
    cout<<"enter the key that you want to search:"<<endl;
    cin>>key;
    bool found=search(arr,size,key);
    if(found){
        cout<<"element"<<" " <<key <<" " <<"is present"<<endl;

    }else{
        cout<<"element" <<" " <<key <<" " <<"is not present"<<endl;
    }

}