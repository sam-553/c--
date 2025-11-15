#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}


int main(){
    int n,r;
    cout<<"enter a number:"<<endl;
    cin>>n;
   
    cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;
    
}