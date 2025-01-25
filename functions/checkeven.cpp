#include<iostream>
using namespace std;

int isEven(int num){
    
        if(num%2==0){
            cout<<"The number is even"<<endl;
           
        }
        else{
            cout<<"The number is odd"<<endl;
        }  
    }

int main()
{
    int n;
    cout<<"Enter the number to check even or odd: ";
    
    cin>>n;
    int result=isEven(n);
    cout<<"the given number is:"<<result;
}