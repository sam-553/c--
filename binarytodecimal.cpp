#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    int temp;
    cout<<"Enter the binary number: ";
    cin>>n;
    int sum=0,i=0;
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            sum+=pow(2,i);
            
        }
        n/=10;
        i++;
    }
    cout<<"The decimal number is: "<<sum <<endl;
}